// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateShouldSerializeTest
// address: 0x76aa344
// body: available
// range: 0x76aa344-0x76aa587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aa584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultContractResolver__CreateShouldSerializeTest
          (undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09522640 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_0917dff8);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091e8d78);
    FUN_03f5c2a4(&DAT_09190048);
    FUN_03f5c2a4(&DAT_0920d020);
    DAT_09522640 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190048);
  System_Object___ctor(lVar1,0);
  if (param_2 != (long *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    uVar3 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar3 = System_String__Concat(DAT_0920d020,uVar3,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    if (lVar2 != 0) {
      plVar4 = (long *)System_Type__GetMethod(lVar2,uVar3,**(undefined8 **)(DAT_09189d88 + 0xb8),0);
      uVar5 = System_Reflection_MethodInfo__op_Equality(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      if (plVar4 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
        lVar2 = DAT_09535400;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar6 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
        uVar5 = System_Type__op_Inequality(uVar3,uVar6,0);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar7 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                   (0);
        if (plVar7 != (long *)0x0) {
          lVar2 = FUN_03f5c420(*(undefined8 *)
                                (*plVar7 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
          uVar3 = (**(code **)(lVar2 + 8))(plVar7,plVar4,lVar2);
          if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 0x10) = uVar3;
            thunk_FUN_03f5d7b8();
            uVar3 = thunk_FUN_03f9944c(DAT_0917dff8);
            FUN_05d78cfc(uVar3,lVar1,DAT_091e8d78,0);
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

