// rea decompile_all
// name: System.Resources.FileBasedResourceGroveler$$GrovelForResourceSet
// address: 0x74d5850
// body: available
// range: 0x74d5850-0x74d5aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d58a8 to 0x74d5b9c System.Resources.FileBasedResourceGroveler$$CreateResourceSet (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d5a74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d5a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Resources_FileBasedResourceGroveler__GrovelForResourceSet
          (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x10), plVar1 != (long *)0x0)) {
    auVar7 = (**(code **)(*plVar1 + 0x188))(plVar1,param_2,*(undefined8 *)(*plVar1 + 400));
    lVar2 = System_Resources_FileBasedResourceGroveler__FindResourceFile
                      (param_1,auVar7._8_8_,auVar7._0_8_);
    if (lVar2 != 0) {
      uVar3 = System_Resources_FileBasedResourceGroveler__CreateResourceSet(param_1,lVar2);
      return uVar3;
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    if (param_2 != 0) {
      uVar4 = System_Globalization_CultureInfo__get_HasInvariantCultureName(param_2,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar3 = thunk_FUN_03fc39d4(&DAT_091805f8);
      lVar2 = FUN_03f5c394(uVar3,8);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091ff528);
      uVar3 = System_Environment__GetResourceString(uVar3,0);
      if (lVar2 != 0) {
        FUN_039af17c(lVar2,0,uVar3);
        uVar3 = System_Environment__get_NewLine(0);
        FUN_039af17c(lVar2,1,uVar3);
        uVar3 = thunk_FUN_03fc39d4(&DAT_09217e68);
        FUN_039af17c(lVar2,2,uVar3);
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 != 0)) {
          FUN_039af17c(lVar2,3,*(undefined8 *)(lVar6 + 0x10));
          uVar3 = thunk_FUN_03fc39d4(&DAT_091f5c68);
          FUN_039af17c(lVar2,4,uVar3);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 != 0)) {
            uVar3 = *(undefined8 *)(lVar6 + 0x38);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Type__op_Equality(uVar3,0,0);
            if ((uVar4 & 1) == 0) {
              if (((*(long *)(param_1 + 0x10) == 0) ||
                  (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 == 0)) ||
                 (plVar1 = *(long **)(lVar6 + 0x38), plVar1 == (long *)0x0)) goto LAB_074d5a90;
              uVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
            }
            else {
              uVar3 = thunk_FUN_03fc39d4(&DAT_091fabe8);
            }
            FUN_039b1d98(lVar2);
            FUN_039af17c(lVar2,5,uVar3);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091f5c30);
            FUN_039af17c(lVar2,6,uVar3);
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            FUN_039b1d98(uVar3);
            uVar3 = System_Resources_ResourceManager_ResourceManagerMediator__GetResourceFileName
                              (uVar3,param_2);
            FUN_039af17c(lVar2,7,uVar3);
            uVar3 = System_String__Concat(lVar2,0);
            thunk_FUN_03fc39d4(&DAT_091882b8);
            uVar5 = thunk_FUN_03f9944c();
            System_Resources_MissingManifestResourceException___ctor(uVar5,uVar3);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091cc210);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar3);
          }
        }
      }
    }
  }
LAB_074d5a90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

