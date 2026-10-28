// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$GetBoosterConfig
// address: 0x4382c0c
// body: available
// range: 0x4382c0c-0x4382dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4382dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4382dc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4382dd4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__GetBoosterConfig(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_0951797c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04b8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0917df48);
    FUN_03f5c2a4(&DAT_091e64a8);
    FUN_03f5c2a4(&DAT_0918e910);
    FUN_03f5c2a4(&DAT_091fcdd8);
    DAT_0951797c = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918e910);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x10);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = thunk_FUN_03f9944c(DAT_0917df48);
    FUN_05d78cfc(uVar3,lVar2,DAT_091e64a8,0);
    uVar1 = FUN_04ee44c0(uVar6,uVar3,DAT_091c04b8);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) goto LAB_04382dc4;
      if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
        return *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
      }
    }
    plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar7;
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar2);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogErrorFormat(DAT_091fcdd8,plVar4,0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_04382dc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

