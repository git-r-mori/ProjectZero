<p align="center">
  <img src="https://img.shields.io/badge/Unreal%20Engine-5.7.2-0E1128?style=for-the-badge&logo=unrealengine&logoColor=white" alt="Unreal Engine 5.7.2" />
  <img src="https://img.shields.io/badge/C%2B%2B-20-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++20" />
  <img src="https://img.shields.io/badge/Blueprint-Visual%20Scripting-137CBD?style=for-the-badge" alt="Blueprint" />
  <img src="https://img.shields.io/badge/Cursor-AI%20Powered-7C3AED?style=for-the-badge" alt="Cursor Pro" />
</p>

<h1 align="center">🎮 ProjectZero</h1>

<p align="center">
  <strong>Unreal Engine 5.7.2 × Web Technologies — 次世代ゲーム開発の実験場</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-Active%20Development-brightgreen?style=flat-square" alt="Status" />
  <img src="https://img.shields.io/badge/License-Private-red?style=flat-square" alt="License" />
  <img src="https://img.shields.io/badge/Year-2026-blue?style=flat-square" alt="Year" />
</p>

---

## 🚀 プロジェクト概要

**ProjectZero** は、Unreal Engine 5.7.2 を基盤とした次世代ゲーム開発プロジェクトです。

単なるゲーム開発にとどまらず、**Web 技術（TypeScript / AWS）とゲームエンジンを高度に連携させる**モダンな開発スタイルの実験場として位置づけています。リアルタイム通信、クラウドインフラ、AI 支援開発を統合し、2026 年の最先端技術でゲーム開発の新しい可能性を探求します。

---

## 🛠️ 技術スタック

### Engine & Development

| カテゴリ | 技術 | バージョン / 詳細 |
|---------|------|------------------|
| 🎮 Game Engine | Unreal Engine | **5.7.2** (C++ / Blueprint) |
| 💻 Editor | Cursor Pro | AI-powered development |
| 🔧 Build System | UnrealBuildTool | Live Coding 対応 |
| 📦 Version Control | Git + LFS | 大容量アセット管理 |

### Hardware Environment

```
┌──────────────────────────────────────────────────────────────────────────────┐
│  🖥️  G-Tune FG-A7G80 — High-End Development Machine                         │
├──────────────────────────────────────────────────────────────────────────────┤
│  GPU      NVIDIA GeForce RTX 5080 / 16GB GDDR7                               │
│  CPU      AMD Ryzen 7 9800X3D (8C/16T, 4.7-5.2GHz, L3 96MB 3D V-Cache)       │
│  RAM      32GB DDR5-5600 (Dual Channel)                                      │
│  Storage  2TB NVMe SSD (PCIe Gen4 x4)                                        │
│  Cooling  360mm AIO Liquid Cooler                                            │
│  PSU      1000W 80PLUS Platinum                                              │
└──────────────────────────────────────────────────────────────────────────────┘
```

---

## 📁 モノレポ構成

```
ProjectZero/
├── 📂 app/                 # 🎮 Unreal Engine プロジェクト本体
│   ├── Config/             #    エンジン・プロジェクト設定
│   ├── Content/            #    アセット (LFS 管理)
│   ├── Source/             #    C++ ソースコード
│   └── ProjectZero.uproject
│
├── 📂 infra/               # ☁️  AWS CDK / TypeScript (予定)
│   └── (coming soon...)    #    インフラストラクチャ as Code
│
├── 📂 web/                 # 🌐 Next.js フロントエンド (予定)
│   └── (coming soon...)    #    管理画面・Web クライアント
│
├── .gitignore
├── .gitattributes          # Git LFS 設定
└── README.md               # 📖 このファイル
```

### 将来の拡張計画

| ディレクトリ | 用途 | 技術スタック |
|-------------|------|-------------|
| `infra/` | クラウドインフラ | AWS CDK, TypeScript, Lambda |
| `web/` | Web クライアント | Next.js 15, React 19, TailwindCSS |
| `shared/` | 共通型定義・ユーティリティ | TypeScript |

---

## ⚡ 開発の始め方

### 前提条件

- [x] Unreal Engine 5.7.2 がインストール済み
- [x] Visual Studio 2022 (C++ ゲーム開発ワークロード)
- [x] Git LFS がインストール済み
- [x] Cursor Pro (推奨)

### 1. リポジトリのクローン

```bash
# Git LFS を有効化
git lfs install

# リポジトリをクローン
git clone https://github.com/your-username/ProjectZero.git
cd ProjectZero
```

### 2. プロジェクトを開く

```bash
# Unreal Engine でプロジェクトを起動
start app/ProjectZero.uproject
```

または、Epic Games Launcher からプロジェクトを追加して起動します。

### 3. Live Coding で高速開発 🔥

ProjectZero は **Live Coding** に対応しています。エディタを起動したまま C++ コードを編集し、即座に反映できます。

| ショートカット | 動作 |
|---------------|------|
| `Ctrl + Alt + F11` | Live Coding のビルド実行 |
| `Ctrl + Shift + B` | フルビルド (Visual Studio) |

> 💡 **Tip**: Live Coding は小規模な変更に最適です。ヘッダーファイルの変更や大規模なリファクタリングにはフルビルドを推奨します。

---

## 🎯 マイルストーン

### ✅ Phase 0: Foundation (完了)

- [x] **ZeroActor** — システムオンライン表示
  - ゲーム起動時に「System Online」を画面に表示
  - C++ Actor の基本実装完了
- [x] プロジェクト構成の確立
- [x] Git LFS によるアセット管理体制

### 🚧 Phase 1: Cloud Integration (進行中)

- [ ] AWS 連携によるデータ通信の確立
- [ ] リアルタイム同期システムの実装
- [ ] サーバーレスバックエンドの構築

### 📋 Phase 2: Web Dashboard (計画中)

- [ ] Next.js による管理画面
- [ ] ゲーム統計のリアルタイム可視化
- [ ] リモート設定管理システム

---

## 🔮 ビジョン

> **"ゲームエンジンとクラウドの境界を超える"**

ProjectZero は、従来のゲーム開発の枠組みを超え、Web 技術とゲームエンジンがシームレスに連携する新しい開発パラダイムを目指しています。

- 🎮 **Unreal Engine** の圧倒的なグラフィックス性能
- ☁️ **AWS** のスケーラブルなクラウドインフラ
- 🤖 **AI 支援開発** による生産性の最大化
- 🔄 **リアルタイム同期** によるライブオペレーション

---

## 📝 ライセンス

This project is **private** and not licensed for public use.

---

<p align="center">
  <sub>Built with ❤️ and ☕ in 2026</sub>
</p>
