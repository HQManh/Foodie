// rea decompile_all
// name: DG.Tweening.DOTweenModulePhysics$$DOLocalPath
// address: 0x454ff54
// body: available
// range: 0x454ff54-0x45501bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45501b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenModulePhysics__DOLocalPath
               (undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_09518797 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_091c71b8);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188f18);
    FUN_03f5c2a4(&DAT_091dbfb8);
    FUN_03f5c2a4(&DAT_091dc020);
    FUN_03f5c2a4(&DAT_091e8560);
    FUN_03f5c2a4(&DAT_091e8568);
    FUN_03f5c2a4(&DAT_0918fad0);
    DAT_09518797 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918fad0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar6 = (long *)(lVar1 + 0x18);
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    if (*plVar6 != 0) {
      if (param_6 < 2) {
        param_6 = 1;
      }
      uVar2 = UnityEngine_Component__get_transform(*plVar6,0);
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar2 = DG_Tweening_Plugins_PathPlugin__Get(0);
      uVar3 = thunk_FUN_03f9944c(DAT_09175e30);
      FUN_06dfb558(uVar3,lVar1,DAT_091e8560,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09175e80);
      FUN_06dfc74c(uVar4,lVar1,DAT_091e8568,0);
      uStack_88 = param_7[1];
      local_90 = *param_7;
      local_80 = *(undefined4 *)(param_7 + 2);
      uVar5 = thunk_FUN_03f9944c(DAT_09188f18);
      DG_Tweening_Plugins_Core_PathCore_Path___ctor(uVar5,param_4,param_3,param_6,&local_90,0);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = FUN_04a7e13c(param_1,uVar2,uVar3,uVar4,uVar5,DAT_091c71b8);
      uVar2 = FUN_04d9642c(uVar2,*plVar6,DAT_091dbfb8);
      lVar1 = FUN_04d96618(uVar2,2,DAT_091dc020);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x140) = param_5;
        *(undefined1 *)(lVar1 + 400) = 1;
        *(undefined1 *)(lVar1 + 0x180) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

