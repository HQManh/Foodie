// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$Begin
// address: 0x4389164
// body: available
// range: 0x4389164-0x438953f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__Begin(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_095179dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09182ce0);
    DAT_095179dc = 1;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__EnsureSubscribed();
  uVar4 = CakeOrder_InGame_CookingBotAutoRetry__KeyOf(param_1,param_2);
  uVar5 = System_String__op_Inequality(uVar4,**(undefined8 **)(DAT_09182cc0 + 0xb8),0);
  lVar7 = DAT_09182cc0;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    **(undefined8 **)(DAT_09182cc0 + 0xb8) = uVar4;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182cc0 + 0xb8),uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_09182ce0);
    CookingGraph_CookingBotFailureKnowledge___ctor(uVar4,0);
    if (DAT_09517a91 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a91 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = (undefined8 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x10);
    *puVar6 = uVar4;
    thunk_FUN_03f5d7b8(puVar6,uVar4);
    if (DAT_09517a92 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a92 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    cVar3 = DAT_09517a8f;
    lVar7 = DAT_09182cc0;
    lVar8 = *(long *)(DAT_09182cc0 + 0xb8);
    *(undefined4 *)(lVar8 + 0xc) = 0;
    *(undefined4 *)(lVar8 + 0x3c) = 0;
    *(undefined4 *)(lVar8 + 0x54) = *(undefined4 *)(lVar8 + 0x50);
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a8f = '\x01';
      lVar7 = DAT_09182cc0;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = DAT_09182cc0;
    }
    cVar3 = DAT_09517a90;
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x60) = 0;
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a90 = '\x01';
      lVar7 = DAT_09182cc0;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = DAT_09182cc0;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 100) = 0;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517a93 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a93 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = DAT_09535468;
  cVar3 = DAT_09517a94;
  lVar7 = DAT_09182cc0;
  *(undefined1 *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) = 1;
  uVar4 = **(undefined8 **)(lVar8 + 0xb8);
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a94 = '\x01';
    lVar7 = DAT_09182cc0;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = DAT_09182cc0;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  *puVar6 = uVar4;
  thunk_FUN_03f5d7b8(puVar6,uVar4);
  if (DAT_09516606 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09516606 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = DAT_09182cc0;
  if (*(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc) == 0) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517a92 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a92 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = DAT_09182cc0;
    *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc) = 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = DAT_09182cc0;
  }
  iVar1 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x24);
  if (DAT_09516606 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09516606 = '\x01';
    lVar7 = DAT_09182cc0;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = DAT_09182cc0;
  }
  if (iVar1 != *(int *)(*(long *)(lVar7 + 0xb8) + 0xc)) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516606 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516606 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    cVar3 = DAT_09517a8d;
    lVar7 = DAT_09182cc0;
    lVar8 = *(long *)(DAT_09182cc0 + 0xb8);
    uVar2 = *(undefined4 *)(lVar8 + 0x20);
    *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(lVar8 + 0xc);
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a8d = '\x01';
      lVar7 = DAT_09182cc0;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = DAT_09182cc0;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x28) = uVar2;
  }
  return;
}

