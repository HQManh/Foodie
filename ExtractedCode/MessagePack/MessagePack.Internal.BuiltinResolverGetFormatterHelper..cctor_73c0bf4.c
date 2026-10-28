// rea decompile_all
// name: MessagePack.Internal.BuiltinResolverGetFormatterHelper$$.cctor
// address: 0x73c0bf4
// body: available
// range: 0x73c0bf4-0x73c35f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c35ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73c35f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_BuiltinResolverGetFormatterHelper___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09520c95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197120);
    FUN_03f5c2a4(&DAT_09174ff8);
    FUN_03f5c2a4(&DAT_09170818);
    FUN_03f5c2a4(&DAT_09181b88);
    FUN_03f5c2a4(&DAT_09170ff0);
    FUN_03f5c2a4(&DAT_09181d38);
    FUN_03f5c2a4(&DAT_09171030);
    FUN_03f5c2a4(&DAT_09181e30);
    FUN_03f5c2a4(&DAT_09181e48);
    FUN_03f5c2a4(&DAT_09170ba8);
    FUN_03f5c2a4(&DAT_091820a0);
    FUN_03f5c2a4(&DAT_09182120);
    FUN_03f5c2a4(&DAT_09182128);
    FUN_03f5c2a4(&DAT_09182140);
    FUN_03f5c2a4(&DAT_09182148);
    FUN_03f5c2a4(&DAT_09182158);
    FUN_03f5c2a4(&DAT_09182160);
    FUN_03f5c2a4(&DAT_09182168);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091824a0);
    FUN_03f5c2a4(&DAT_091824c0);
    FUN_03f5c2a4(&DAT_09170bb8);
    FUN_03f5c2a4(&DAT_09182868);
    FUN_03f5c2a4(&DAT_09171258);
    FUN_03f5c2a4(&DAT_09183550);
    FUN_03f5c2a4(&DAT_09183580);
    FUN_03f5c2a4(&DAT_09183598);
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09170bc8);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_091837e0);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091a0cd8);
    FUN_03f5c2a4(&DAT_091a0cd0);
    FUN_03f5c2a4(&DAT_09176f38);
    FUN_03f5c2a4(&DAT_09183c40);
    FUN_03f5c2a4(&DAT_09183c58);
    FUN_03f5c2a4(&DAT_09170bd8);
    FUN_03f5c2a4(&DAT_09184f38);
    FUN_03f5c2a4(&DAT_091719c8);
    FUN_03f5c2a4(&DAT_09186f18);
    FUN_03f5c2a4(&DAT_09186f20);
    FUN_03f5c2a4(&DAT_09170bf8);
    FUN_03f5c2a4(&DAT_09186f30);
    FUN_03f5c2a4(&DAT_09186f38);
    FUN_03f5c2a4(&DAT_09170c00);
    FUN_03f5c2a4(&DAT_09186f48);
    FUN_03f5c2a4(&DAT_09186f50);
    FUN_03f5c2a4(&DAT_09170c08);
    FUN_03f5c2a4(&DAT_091aa308);
    FUN_03f5c2a4(&DAT_091aa360);
    FUN_03f5c2a4(&DAT_091aa350);
    FUN_03f5c2a4(&DAT_091aa328);
    FUN_03f5c2a4(&DAT_091aa300);
    FUN_03f5c2a4(&DAT_091aa358);
    FUN_03f5c2a4(&DAT_091aa2e0);
    FUN_03f5c2a4(&DAT_091aa320);
    FUN_03f5c2a4(&DAT_091aa338);
    FUN_03f5c2a4(&DAT_091aa330);
    FUN_03f5c2a4(&DAT_091aa310);
    FUN_03f5c2a4(&DAT_091aa340);
    FUN_03f5c2a4(&DAT_091aa348);
    FUN_03f5c2a4(&DAT_091aa318);
    FUN_03f5c2a4(&DAT_0917b8e8);
    FUN_03f5c2a4(&DAT_0917b8a8);
    FUN_03f5c2a4(&DAT_0917b900);
    FUN_03f5c2a4(&DAT_0917b8d0);
    FUN_03f5c2a4(&DAT_0917b8c8);
    FUN_03f5c2a4(&DAT_0917b908);
    FUN_03f5c2a4(&DAT_0917b898);
    FUN_03f5c2a4(&DAT_0917b8d8);
    FUN_03f5c2a4(&DAT_0917b8e0);
    FUN_03f5c2a4(&DAT_0917b8c0);
    FUN_03f5c2a4(&DAT_0917b8b0);
    FUN_03f5c2a4(&DAT_0917b8f8);
    FUN_03f5c2a4(&DAT_0917b8f0);
    FUN_03f5c2a4(&DAT_0917b8b8);
    FUN_03f5c2a4(&DAT_091708d0);
    FUN_03f5c2a4(&DAT_09170940);
    FUN_03f5c2a4(&DAT_09170970);
    FUN_03f5c2a4(&DAT_091708e0);
    FUN_03f5c2a4(&DAT_09170938);
    FUN_03f5c2a4(&DAT_09170998);
    FUN_03f5c2a4(&DAT_09170900);
    FUN_03f5c2a4(&DAT_09170968);
    FUN_03f5c2a4(&DAT_091708d8);
    FUN_03f5c2a4(&DAT_091709a0);
    FUN_03f5c2a4(&DAT_09170950);
    FUN_03f5c2a4(&DAT_091708f8);
    FUN_03f5c2a4(&DAT_091709a8);
    FUN_03f5c2a4(&DAT_09170980);
    FUN_03f5c2a4(&DAT_09170948);
    FUN_03f5c2a4(&DAT_09187eb0);
    FUN_03f5c2a4(&DAT_09172380);
    FUN_03f5c2a4(&DAT_09187ec8);
    FUN_03f5c2a4(&DAT_09172388);
    FUN_03f5c2a4(&DAT_091709b8);
    FUN_03f5c2a4(&DAT_09188858);
    FUN_03f5c2a4(&DAT_09172538);
    FUN_03f5c2a4(&DAT_091889a8);
    FUN_03f5c2a4(&DAT_091889b0);
    FUN_03f5c2a4(&DAT_091889b8);
    FUN_03f5c2a4(&DAT_091889c0);
    FUN_03f5c2a4(&DAT_091889c8);
    FUN_03f5c2a4(&DAT_09188a10);
    FUN_03f5c2a4(&DAT_09188a18);
    FUN_03f5c2a4(&DAT_09188a20);
    FUN_03f5c2a4(&DAT_09188a30);
    FUN_03f5c2a4(&DAT_09188a38);
    FUN_03f5c2a4(&DAT_09188a40);
    FUN_03f5c2a4(&DAT_09188a48);
    FUN_03f5c2a4(&DAT_09188a50);
    FUN_03f5c2a4(&DAT_09188a58);
    FUN_03f5c2a4(&DAT_09188a60);
    FUN_03f5c2a4(&DAT_09188a68);
    FUN_03f5c2a4(&DAT_09170a48);
    FUN_03f5c2a4(&DAT_09170a18);
    FUN_03f5c2a4(&DAT_09170a50);
    FUN_03f5c2a4(&DAT_09170a28);
    FUN_03f5c2a4(&DAT_09170a40);
    FUN_03f5c2a4(&DAT_091709c8);
    FUN_03f5c2a4(&DAT_09170a70);
    FUN_03f5c2a4(&DAT_09170aa8);
    FUN_03f5c2a4(&DAT_091709e0);
    FUN_03f5c2a4(&DAT_091709d8);
    FUN_03f5c2a4(&DAT_09170a10);
    FUN_03f5c2a4(&DAT_09170a60);
    FUN_03f5c2a4(&DAT_09170a30);
    FUN_03f5c2a4(&DAT_09170a20);
    FUN_03f5c2a4(&DAT_09170a88);
    FUN_03f5c2a4(&DAT_091709e8);
    FUN_03f5c2a4(&DAT_09170ab0);
    FUN_03f5c2a4(&DAT_091709c0);
    FUN_03f5c2a4(&DAT_091709d0);
    FUN_03f5c2a4(&DAT_09170a68);
    FUN_03f5c2a4(&DAT_09170a38);
    FUN_03f5c2a4(&DAT_09170a90);
    FUN_03f5c2a4(&DAT_09170a58);
    FUN_03f5c2a4(&DAT_091709f8);
    FUN_03f5c2a4(&DAT_09170aa0);
    FUN_03f5c2a4(&DAT_09170a80);
    FUN_03f5c2a4(&DAT_09170a08);
    FUN_03f5c2a4(&DAT_091709f0);
    FUN_03f5c2a4(&DAT_09170a00);
    FUN_03f5c2a4(&DAT_09170a98);
    FUN_03f5c2a4(&DAT_09170c10);
    FUN_03f5c2a4(&DAT_091898c8);
    FUN_03f5c2a4(&DAT_09172888);
    FUN_03f5c2a4(&DAT_09170ab8);
    FUN_03f5c2a4(&DAT_09170ac0);
    FUN_03f5c2a4(&DAT_0918a458);
    FUN_03f5c2a4(&DAT_0918a460);
    FUN_03f5c2a4(&DAT_09170c30);
    FUN_03f5c2a4(&DAT_0918ac50);
    FUN_03f5c2a4(&DAT_0918ac78);
    FUN_03f5c2a4(&DAT_09170c38);
    FUN_03f5c2a4(&DAT_091bb740);
    FUN_03f5c2a4(&DAT_091bb728);
    FUN_03f5c2a4(&DAT_091bb758);
    FUN_03f5c2a4(&DAT_091bb738);
    FUN_03f5c2a4(&DAT_091bb760);
    FUN_03f5c2a4(&DAT_091bb6f0);
    FUN_03f5c2a4(&DAT_091bb708);
    FUN_03f5c2a4(&DAT_091bb6f8);
    FUN_03f5c2a4(&DAT_091bb770);
    FUN_03f5c2a4(&DAT_091bb748);
    FUN_03f5c2a4(&DAT_091bb700);
    FUN_03f5c2a4(&DAT_091bb768);
    FUN_03f5c2a4(&DAT_091bb750);
    FUN_03f5c2a4(&DAT_091bb710);
    FUN_03f5c2a4(&DAT_091bb730);
    FUN_03f5c2a4(&DAT_091bb718);
    FUN_03f5c2a4(&DAT_0917ea28);
    FUN_03f5c2a4(&DAT_0917ea60);
    FUN_03f5c2a4(&DAT_0917ea48);
    FUN_03f5c2a4(&DAT_0917ea30);
    FUN_03f5c2a4(&DAT_0917eaa0);
    FUN_03f5c2a4(&DAT_0917ea40);
    FUN_03f5c2a4(&DAT_0917ea58);
    FUN_03f5c2a4(&DAT_0917ea90);
    FUN_03f5c2a4(&DAT_0917ea78);
    FUN_03f5c2a4(&DAT_0917ea98);
    FUN_03f5c2a4(&DAT_0917ea80);
    FUN_03f5c2a4(&DAT_0917ea70);
    FUN_03f5c2a4(&DAT_0917ea68);
    FUN_03f5c2a4(&DAT_0917ea88);
    FUN_03f5c2a4(&DAT_0917ea20);
    FUN_03f5c2a4(&DAT_0917ea38);
    FUN_03f5c2a4(&DAT_0918b360);
    FUN_03f5c2a4(&DAT_09172f30);
    FUN_03f5c2a4(&DAT_09170c40);
    FUN_03f5c2a4(&DAT_0918bd80);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_0917f618);
    FUN_03f5c2a4(&DAT_0918c4d0);
    FUN_03f5c2a4(&DAT_0918c4d8);
    FUN_03f5c2a4(&DAT_09170c58);
    FUN_03f5c2a4(&DAT_0918c4e8);
    FUN_03f5c2a4(&DAT_0918c4f0);
    FUN_03f5c2a4(&DAT_09170c60);
    FUN_03f5c2a4(&DAT_0918c500);
    FUN_03f5c2a4(&DAT_0918c508);
    FUN_03f5c2a4(&DAT_09170c68);
    FUN_03f5c2a4(&DAT_0918c938);
    FUN_03f5c2a4(&DAT_091733e8);
    FUN_03f5c2a4(&DAT_0918cb80);
    FUN_03f5c2a4(&DAT_091734c0);
    FUN_03f5c2a4(&DAT_0918cbe8);
    FUN_03f5c2a4(&DAT_091734e8);
    FUN_03f5c2a4(&DAT_0918cc48);
    FUN_03f5c2a4(&DAT_09173510);
    FUN_03f5c2a4(&DAT_0918cc98);
    FUN_03f5c2a4(&DAT_09173528);
    DAT_09520c95 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09176f38);
  FUN_06fd76bc(lVar2,DAT_091a0cd0);
  lVar1 = DAT_09535410;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
  if (*(int *)(DAT_09186f20 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09186f20);
  }
  if (lVar2 != 0) {
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f20 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    if (*(int *)(DAT_09186f38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186f38);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f38 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    if (*(int *)(DAT_09186f50 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186f50);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f50 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    if (*(int *)(DAT_0918c4d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c4d8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c4d8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    if (*(int *)(DAT_0918c4f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c4f0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c4f0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    if (*(int *)(DAT_0918c508 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c508);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c508 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    if (*(int *)(DAT_0918ac78 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ac78);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918ac78 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    if (*(int *)(DAT_09183c58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183c58);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09183c58 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    if (*(int *)(DAT_09181e48 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181e48);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09181e48 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    if (*(int *)(DAT_09182140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182140);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182140 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    if (*(int *)(DAT_0918a460 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a460);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918a460 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171448,0);
    if (*(int *)(DAT_09183580 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183580);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09183580 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
    if (*(int *)(DAT_091824c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091824c0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091824c0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a30,0);
    if (*(int *)(DAT_09188a10 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a10);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a10 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a38,0);
    if (*(int *)(DAT_09188a18 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a18);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a18 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a40,0);
    if (*(int *)(DAT_09188a20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a20);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a20 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a88,0);
    if (*(int *)(DAT_09188a58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a58);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a58 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a90,0);
    if (*(int *)(DAT_09188a60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a60);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a60 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a98,0);
    if (*(int *)(DAT_09188a68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a68);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a68 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a70,0);
    if (*(int *)(DAT_09188a40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a40);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a40 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a20,0);
    if (*(int *)(DAT_091889c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889c8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889c8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709e8,0);
    if (*(int *)(DAT_091889a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889a8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889a8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709f0,0);
    if (*(int *)(DAT_091889b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889b0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889b0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a68,0);
    if (*(int *)(DAT_09188a38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a38);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a38 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a08,0);
    if (*(int *)(DAT_091889c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889c0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889c0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709f8,0);
    if (*(int *)(DAT_091889b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889b8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889b8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    if (*(int *)(DAT_09188a50 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a50);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a50 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171520,0);
    if (*(int *)(DAT_091837e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091837e0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091837e0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a18,0);
    uVar5 = **(undefined8 **)(DAT_091837e0 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea60);
    FUN_061d3bec(uVar4,uVar5,DAT_091bb730);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09173188,0);
    if (*(int *)(DAT_0918bd80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd80);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918bd80 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a80,0);
    uVar5 = **(undefined8 **)(DAT_0918bd80 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea88);
    FUN_061d4914(uVar4,uVar5,DAT_091bb758);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171468,0);
    if (*(int *)(DAT_09183598 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183598);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09183598 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a10,0);
    uVar5 = **(undefined8 **)(DAT_09183598 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea58);
    FUN_061d3960(uVar4,uVar5,DAT_091bb728);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091719c8,0);
    if (*(int *)(DAT_09184f38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184f38);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184f38 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a28,0);
    uVar5 = **(undefined8 **)(DAT_09184f38 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea68);
    FUN_061d3e78(uVar4,uVar5,DAT_091bb738);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091733e8,0);
    if (*(int *)(DAT_0918c938 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c938);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c938 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09173528,0);
    if (*(int *)(DAT_0918cc98 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cc98);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918cc98 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172f30,0);
    if (*(int *)(DAT_0918b360 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b360);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918b360 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171030,0);
    if (*(int *)(DAT_09181d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181d38);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09181d38 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
    if (*(int *)(DAT_0917f618 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0917f618);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0917f618 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    if (*(int *)(DAT_09182120 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182120);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182120 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172538,0);
    if (*(int *)(DAT_09188858 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188858);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188858 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a58,0);
    if (*(int *)(DAT_09188a30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a30);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a30 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bf8,0);
    if (*(int *)(DAT_09186f18 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186f18);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f18 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c00,0);
    if (*(int *)(DAT_09186f30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186f30);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f30 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c08,0);
    if (*(int *)(DAT_09186f48 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186f48);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09186f48 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c58,0);
    if (*(int *)(DAT_0918c4d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c4d0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c4d0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c60,0);
    if (*(int *)(DAT_0918c4e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c4e8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c4e8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c68,0);
    if (*(int *)(DAT_0918c500 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c500);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918c500 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c38,0);
    if (*(int *)(DAT_0918ac50 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ac50);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918ac50 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bd8,0);
    if (*(int *)(DAT_09183c40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183c40);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09183c40 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ba8,0);
    if (*(int *)(DAT_09181e30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181e30);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09181e30 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c30,0);
    if (*(int *)(DAT_0918a458 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a458);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918a458 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bc8,0);
    if (*(int *)(DAT_09183550 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183550);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09183550 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bb8,0);
    if (*(int *)(DAT_091824a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091824a0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091824a0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c40,0);
    if (*(int *)(DAT_09188a48 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a48);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a48 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170938,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8c0);
    FUN_0563ca34(uVar4,DAT_091aa318);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170940,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8c8);
    FUN_0563cf70(uVar4,DAT_091aa320);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170948,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8d0);
    FUN_0563d4ac(uVar4,DAT_091aa328);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170998,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8f8);
    FUN_0563e9a8(uVar4,DAT_091aa350);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709a0,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b900);
    FUN_0563eee4(uVar4,DAT_091aa358);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709a8,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b908);
    FUN_0563f420(uVar4,DAT_091aa360);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170970,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8e8);
    FUN_0563e46c(uVar4,DAT_091aa340);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170900,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8b8);
    FUN_0563c4f8(uVar4,DAT_091aa310);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091708d0,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b898);
    FUN_0563affc(uVar4,DAT_091aa2e0);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170968,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8e0);
    FUN_0563df28(uVar4,DAT_091aa338);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091708e0,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8a8);
    FUN_0563ba74(uVar4,DAT_091aa300);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091708f8,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8b0);
    FUN_0563bfb4(uVar4,DAT_091aa308);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170980,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8f0);
    FUN_0563d9ec(uVar4,DAT_091aa348);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091708d8,0);
    if (*(int *)(DAT_09182148 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182148);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182148 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c10,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09174ff8);
    FUN_050b3158(uVar4,DAT_09197120);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170950,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0917b8d8);
    FUN_0563d9ec(uVar4,DAT_091aa330);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709b8,0);
    if (*(int *)(DAT_09182158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182158);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182158 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709c8,0);
    uVar5 = **(undefined8 **)(DAT_09182158 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea28);
    FUN_061d2a24(uVar4,uVar5,DAT_091bb6f8);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ab8,0);
    if (*(int *)(DAT_09182160 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182160);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182160 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709d0,0);
    uVar5 = **(undefined8 **)(DAT_09182160 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea30);
    FUN_061d2cb0(uVar4,uVar5,DAT_091bb700);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ac0,0);
    if (*(int *)(DAT_09182168 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182168);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182168 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709d8,0);
    uVar5 = **(undefined8 **)(DAT_09182168 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea38);
    FUN_061d2f3c(uVar4,uVar5,DAT_091bb708);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170818,0);
    if (*(int *)(DAT_09182128 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182128);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182128 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709c0,0);
    uVar5 = **(undefined8 **)(DAT_09182128 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea20);
    FUN_061d2798(uVar4,uVar5,DAT_091bb6f0);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ff0,0);
    if (*(int *)(DAT_09181b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181b88);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09181b88 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709e0,0);
    uVar5 = **(undefined8 **)(DAT_09181b88 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea40);
    FUN_061d31ec(uVar4,uVar5,DAT_091bb710);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171258,0);
    if (*(int *)(DAT_09182868 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182868);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09182868 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a00,0);
    uVar5 = **(undefined8 **)(DAT_09182868 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea48);
    FUN_061d3478(uVar4,uVar5,DAT_091bb718);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091734c0,0);
    if (*(int *)(DAT_0918cb80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cb80);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918cb80 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170aa0,0);
    uVar5 = **(undefined8 **)(DAT_0918cb80 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea90);
    FUN_061d4b80(uVar4,uVar5,DAT_091bb760);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091734e8,0);
    if (*(int *)(DAT_0918cbe8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cbe8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918cbe8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170aa8,0);
    uVar5 = **(undefined8 **)(DAT_0918cbe8 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea98);
    FUN_061d4e0c(uVar4,uVar5,DAT_091bb768);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09173510,0);
    if (*(int *)(DAT_0918cc48 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cc48);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_0918cc48 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ab0,0);
    uVar5 = **(undefined8 **)(DAT_0918cc48 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917eaa0);
    FUN_061d509c(uVar4,uVar5,DAT_091bb770);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172888,0);
    if (*(int *)(DAT_091898c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091898c8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091898c8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a60,0);
    uVar5 = **(undefined8 **)(DAT_091898c8 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea80);
    FUN_061d467c(uVar4,uVar5,DAT_091bb750);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172380,0);
    if (*(int *)(DAT_09187eb0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187eb0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09187eb0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a48,0);
    uVar5 = **(undefined8 **)(DAT_09187eb0 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea70);
    FUN_061d4104(uVar4,uVar5,DAT_091bb740);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172388,0);
    if (*(int *)(DAT_09187ec8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187ec8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09187ec8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a50,0);
    uVar5 = **(undefined8 **)(DAT_09187ec8 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_0917ea78);
    FUN_061d43bc(uVar4,uVar5,DAT_091bb748);
    FUN_06fd8454(lVar2,uVar3,uVar4,DAT_091a0cd8);
    **(long **)(DAT_091820a0 + 0xb8) = lVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091820a0 + 0xb8),lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

