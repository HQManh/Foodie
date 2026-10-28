// rea decompile_all
// name: AppsFlyerSDK.AppsFlyerPurchaseRevenueBridge$$RegisterDataSource
// address: 0x4068834
// body: available
// range: 0x4068834-0x4068a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4068a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4068a28 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4068a2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4068a38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04068a24) */

void AppsFlyerSDK_AppsFlyerPurchaseRevenueBridge__RegisterDataSource(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09515c0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181130);
    FUN_03f5c2a4(&DAT_09181500);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918c720);
    FUN_03f5c2a4(&DAT_09222838);
    FUN_03f5c2a4(&DAT_092190b0);
    DAT_09515c0b = 1;
  }
  **(undefined8 **)(DAT_09181500 + 0xb8) = param_1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09181500 + 0xb8),param_1);
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09181130);
  UnityEngine_AndroidJavaClass___ctor(plVar1,DAT_092190b0,0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
  lVar3 = thunk_FUN_03f9944c(DAT_0918c720);
  AppsFlyerSDK_UnityPurchaseRevenueBridgeProxy___ctor();
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    if (plVar1 != (long *)0x0) {
      UnityEngine_AndroidJavaObject___CallStatic(plVar1,DAT_09222838,plVar2,0);
      if (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185a58) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040689f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_040689f8:
        (*(code *)*puVar5)(plVar1,puVar5[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

