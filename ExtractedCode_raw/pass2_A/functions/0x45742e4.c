// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$SetCapacities
// address: 0x45742e4
// body: available
// range: 0x45742e4-0x4574827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4574824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__SetCapacities(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_44;
  int local_38;
  int local_34;
  
  if ((DAT_095188c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0650);
    FUN_03f5c2a4(&DAT_091b1168);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_0920ce38);
    FUN_03f5c2a4(&DAT_0920ce28);
    FUN_03f5c2a4(&DAT_0920ce20);
    FUN_03f5c2a4(&DAT_0920ce30);
    FUN_03f5c2a4(&DAT_0920ce40);
    DAT_095188c8 = 1;
  }
  if (param_1 < 1) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      local_34 = param_1;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = param_2;
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
      local_44 = 1;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_0920ce38,uVar1,uVar2,uVar3,0);
      DG_Tweening_Core_Debugger__LogWarning(uVar1,0,0);
    }
    param_1 = 1;
  }
  if (param_2 < 1) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      local_34 = param_1;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = param_2;
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
      local_44 = 1;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_0920ce28,uVar1,uVar2,uVar3,0);
      DG_Tweening_Core_Debugger__LogWarning(uVar1,0,0);
    }
    param_2 = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x2c);
  iVar7 = param_1;
  if (param_1 < iVar5) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar5 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x2c);
    }
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    iVar7 = iVar5;
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      local_34 = param_1;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = param_2;
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
      local_44 = iVar5;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_0920ce40,uVar1,uVar2,uVar3,0);
      DG_Tweening_Core_Debugger__LogWarning(uVar1,0,0);
    }
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x30);
  iVar6 = param_2;
  if (param_2 < iVar5) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar5 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x30);
    }
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    iVar6 = iVar5;
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      local_34 = iVar7;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = param_2;
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
      local_44 = iVar5;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_0920ce30,uVar1,uVar2,uVar3,0);
      DG_Tweening_Core_Debugger__LogWarning(uVar1,0,0);
    }
  }
  iVar5 = iVar7;
  if (iVar7 < iVar6) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    iVar5 = iVar6;
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      local_34 = iVar7;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = iVar6;
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
      local_44 = iVar6;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_0920ce20,uVar1,uVar2,uVar3,0);
      DG_Tweening_Core_Debugger__LogWarning(uVar1,0,0);
    }
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_0918c158 + 0xb8);
  *(int *)(lVar4 + 4) = iVar5 + iVar6;
  *(int *)(lVar4 + 8) = iVar5;
  uVar1 = DAT_091c0650;
  *(int *)(lVar4 + 0xc) = iVar6;
  FUN_0492e500(lVar4 + 0x48,iVar5 + iVar6,uVar1);
  FUN_0492e500(*(long *)(DAT_0918c158 + 0xb8) + 0x50,iVar5,DAT_091c0650);
  lVar4 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e07e8(lVar4,*(undefined4 *)(*(long *)(DAT_0918c158 + 0xb8) + 4),DAT_091b1168);
  return;
}

