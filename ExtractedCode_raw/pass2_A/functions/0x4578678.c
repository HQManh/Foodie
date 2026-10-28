// rea decompile_all
// name: DG.Tweening.Core.Easing.EaseManager$$ToEaseFunction
// address: 0x4578678
// body: available
// range: 0x4578678-0x45797eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_Core_Easing_EaseManager__ToEaseFunction(undefined4 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_095188e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ed0);
    FUN_03f5c2a4(&DAT_091e9550);
    FUN_03f5c2a4(&DAT_091e9560);
    FUN_03f5c2a4(&DAT_091e9568);
    FUN_03f5c2a4(&DAT_091e9570);
    FUN_03f5c2a4(&DAT_091e9578);
    FUN_03f5c2a4(&DAT_091e9580);
    FUN_03f5c2a4(&DAT_091e9588);
    FUN_03f5c2a4(&DAT_091e9590);
    FUN_03f5c2a4(&DAT_091e9598);
    FUN_03f5c2a4(&DAT_091e95a0);
    FUN_03f5c2a4(&DAT_091e95a8);
    FUN_03f5c2a4(&DAT_091e9558);
    FUN_03f5c2a4(&DAT_091e95b8);
    FUN_03f5c2a4(&DAT_091e95c0);
    FUN_03f5c2a4(&DAT_091e95c8);
    FUN_03f5c2a4(&DAT_091e95d0);
    FUN_03f5c2a4(&DAT_091e95d8);
    FUN_03f5c2a4(&DAT_091e95e0);
    FUN_03f5c2a4(&DAT_091e95e8);
    FUN_03f5c2a4(&DAT_091e95f0);
    FUN_03f5c2a4(&DAT_091e95f8);
    FUN_03f5c2a4(&DAT_091e9600);
    FUN_03f5c2a4(&DAT_091e95b0);
    FUN_03f5c2a4(&DAT_091e9610);
    FUN_03f5c2a4(&DAT_091e9618);
    FUN_03f5c2a4(&DAT_091e9620);
    FUN_03f5c2a4(&DAT_091e9628);
    FUN_03f5c2a4(&DAT_091e9630);
    FUN_03f5c2a4(&DAT_091e9638);
    FUN_03f5c2a4(&DAT_091e9608);
    FUN_03f5c2a4(&DAT_091e9640);
    FUN_03f5c2a4(&DAT_091e9648);
    FUN_03f5c2a4(&DAT_091e9650);
    FUN_03f5c2a4(&DAT_091e9658);
    FUN_03f5c2a4(&DAT_091e9660);
    FUN_03f5c2a4(&DAT_091e9668);
    FUN_03f5c2a4(&DAT_09190460);
    DAT_095188e7 = 1;
  }
  iVar1 = *(int *)(DAT_09190460 + 0xe4);
  switch(param_1) {
  case 1:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[1] != 0) {
      return puVar5[1];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9550,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 8);
    *plVar2 = lVar3;
    break;
  case 2:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[2] != 0) {
      return puVar5[2];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9558,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x10);
    *plVar2 = lVar3;
    break;
  case 3:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[3] != 0) {
      return puVar5[3];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95b0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x18);
    *plVar2 = lVar3;
    break;
  case 4:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[4] != 0) {
      return puVar5[4];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9608,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x20);
    *plVar2 = lVar3;
    break;
  case 5:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[5] != 0) {
      return puVar5[5];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9640,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x28);
    *plVar2 = lVar3;
    break;
  case 6:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[6] != 0) {
      return puVar5[6];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9648,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x30);
    *plVar2 = lVar3;
    break;
  case 7:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[7] != 0) {
      return puVar5[7];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9650,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x38);
    *plVar2 = lVar3;
    break;
  case 8:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[8] != 0) {
      return puVar5[8];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9658,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x40);
    *plVar2 = lVar3;
    break;
  case 9:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[9] != 0) {
      return puVar5[9];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9660,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x48);
    *plVar2 = lVar3;
    break;
  case 10:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[10] != 0) {
      return puVar5[10];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9668,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x50);
    *plVar2 = lVar3;
    break;
  case 0xb:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0xb] != 0) {
      return puVar5[0xb];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9560,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x58);
    *plVar2 = lVar3;
    break;
  case 0xc:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0xc] != 0) {
      return puVar5[0xc];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9568,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x60);
    *plVar2 = lVar3;
    break;
  case 0xd:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0xd] != 0) {
      return puVar5[0xd];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9570,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x68);
    *plVar2 = lVar3;
    break;
  case 0xe:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0xe] != 0) {
      return puVar5[0xe];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9578,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x70);
    *plVar2 = lVar3;
    break;
  case 0xf:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0xf] != 0) {
      return puVar5[0xf];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9580,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x78);
    *plVar2 = lVar3;
    break;
  case 0x10:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x10] != 0) {
      return puVar5[0x10];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9588,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x80);
    *plVar2 = lVar3;
    break;
  case 0x11:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x11] != 0) {
      return puVar5[0x11];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9590,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x88);
    *plVar2 = lVar3;
    break;
  case 0x12:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x12] != 0) {
      return puVar5[0x12];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9598,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x90);
    *plVar2 = lVar3;
    break;
  case 0x13:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x13] != 0) {
      return puVar5[0x13];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95a0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x98);
    *plVar2 = lVar3;
    break;
  case 0x14:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x14] != 0) {
      return puVar5[0x14];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95a8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xa0);
    *plVar2 = lVar3;
    break;
  case 0x15:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x15] != 0) {
      return puVar5[0x15];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95b8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xa8);
    *plVar2 = lVar3;
    break;
  case 0x16:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x16] != 0) {
      return puVar5[0x16];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95c0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xb0);
    *plVar2 = lVar3;
    break;
  case 0x17:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x17] != 0) {
      return puVar5[0x17];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95c8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xb8);
    *plVar2 = lVar3;
    break;
  case 0x18:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x18] != 0) {
      return puVar5[0x18];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95d0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xc0);
    *plVar2 = lVar3;
    break;
  case 0x19:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x19] != 0) {
      return puVar5[0x19];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95d8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 200);
    *plVar2 = lVar3;
    break;
  case 0x1a:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1a] != 0) {
      return puVar5[0x1a];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95e0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xd0);
    *plVar2 = lVar3;
    break;
  case 0x1b:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1b] != 0) {
      return puVar5[0x1b];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95e8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xd8);
    *plVar2 = lVar3;
    break;
  case 0x1c:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1c] != 0) {
      return puVar5[0x1c];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95f0,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xe0);
    *plVar2 = lVar3;
    break;
  case 0x1d:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1d] != 0) {
      return puVar5[0x1d];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e95f8,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xe8);
    *plVar2 = lVar3;
    break;
  case 0x1e:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1e] != 0) {
      return puVar5[0x1e];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9600,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xf0);
    *plVar2 = lVar3;
    break;
  case 0x1f:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x1f] != 0) {
      return puVar5[0x1f];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9610,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0xf8);
    *plVar2 = lVar3;
    break;
  case 0x20:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x20] != 0) {
      return puVar5[0x20];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9618,0);
    lVar4 = *(long *)(DAT_09190460 + 0xb8);
    *(long *)(lVar4 + 0x100) = lVar3;
    plVar2 = (long *)(lVar4 + 0x100);
    break;
  case 0x21:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x21] != 0) {
      return puVar5[0x21];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9620,0);
    lVar4 = *(long *)(DAT_09190460 + 0xb8);
    *(long *)(lVar4 + 0x108) = lVar3;
    plVar2 = (long *)(lVar4 + 0x108);
    break;
  case 0x22:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x22] != 0) {
      return puVar5[0x22];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9628,0);
    lVar4 = *(long *)(DAT_09190460 + 0xb8);
    *(long *)(lVar4 + 0x110) = lVar3;
    plVar2 = (long *)(lVar4 + 0x110);
    break;
  case 0x23:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x23] != 0) {
      return puVar5[0x23];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9630,0);
    lVar4 = *(long *)(DAT_09190460 + 0xb8);
    *(long *)(lVar4 + 0x118) = lVar3;
    plVar2 = (long *)(lVar4 + 0x118);
    break;
  default:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    if (puVar5[0x24] != 0) {
      return puVar5[0x24];
    }
    if (*(int *)(DAT_09190460 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09190460 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03f9944c(DAT_09183ed0);
    DG_Tweening_EaseFunction___ctor(lVar3,uVar6,DAT_091e9638,0);
    plVar2 = (long *)(*(long *)(DAT_09190460 + 0xb8) + 0x120);
    *(long *)(*(long *)(DAT_09190460 + 0xb8) + 0x120) = lVar3;
  }
  thunk_FUN_03f5d7b8(plVar2,lVar3);
  return lVar3;
}

