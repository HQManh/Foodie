// rea decompile_all
// name: DG.Tweening.DOTweenModulePhysics2D$$DOPath
// address: 0x4551430
// body: available
// range: 0x4551430-0x45516fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45516f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45516f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenModulePhysics2D__DOPath
               (undefined4 param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_095187a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_091c71b8);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188f18);
    FUN_03f5c2a4(&DAT_091dbfb8);
    FUN_03f5c2a4(&DAT_091dc020);
    FUN_03f5c2a4(&DAT_091e85c8);
    FUN_03f5c2a4(&DAT_091e85d0);
    FUN_03f5c2a4(&DAT_0918fb08);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095187a1 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918fb08);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar10 = (undefined8 *)(lVar2 + 0x10);
    *puVar10 = param_2;
    thunk_FUN_03f5d7b8(puVar10,param_2);
    if (param_6 < 2) {
      param_6 = 1;
    }
    if (param_3 != 0) {
      uVar11 = *(ulong *)(param_3 + 0x18);
      lVar3 = FUN_03f5c394(DAT_091807f8,uVar11 & 0xffffffff);
      if (0 < (int)uVar11) {
        uVar8 = 0;
        puVar9 = (undefined4 *)(lVar3 + 0x28);
        do {
          if (*(uint *)(param_3 + 0x18) <= uVar8) {
LAB_045516f4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar3 == 0) goto LAB_045516f8;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_045516f4;
          lVar1 = uVar8 * 8;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(param_3 + 0x20 + lVar1);
          *puVar9 = 0;
          puVar9 = puVar9 + 3;
        } while ((uVar11 & 0xffffffff) != uVar8);
      }
      uVar4 = DG_Tweening_Plugins_PathPlugin__Get(0);
      uVar5 = thunk_FUN_03f9944c(DAT_09175e30);
      FUN_06dfb558(uVar5,lVar2,DAT_091e85c8,0);
      uVar6 = thunk_FUN_03f9944c(DAT_09175e80);
      FUN_06dfc74c(uVar6,lVar2,DAT_091e85d0,0);
      uStack_88 = param_7[1];
      local_90 = *param_7;
      local_80 = *(undefined4 *)(param_7 + 2);
      uVar7 = thunk_FUN_03f9944c(DAT_09188f18);
      DG_Tweening_Plugins_Core_PathCore_Path___ctor(uVar7,param_4,lVar3,param_6,&local_90,0);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = FUN_04a7e13c(param_1,uVar4,uVar5,uVar6,uVar7,DAT_091c71b8);
      uVar4 = FUN_04d9642c(uVar4,*puVar10,DAT_091dbfb8);
      lVar2 = FUN_04d96618(uVar4,2,DAT_091dc020);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x140) = param_5;
        *(undefined1 *)(lVar2 + 0x191) = 1;
        return;
      }
    }
  }
LAB_045516f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

