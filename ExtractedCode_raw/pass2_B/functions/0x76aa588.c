// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$SetIsSpecifiedActions
// address: 0x76aa588
// body: available
// range: 0x76aa588-0x76aa887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aa86c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76aa884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__SetIsSpecifiedActions
               (undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09522641 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_0917dff8);
    FUN_03f5c2a4(&DAT_091d7118);
    FUN_03f5c2a4(&DAT_091d7130);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091e8d80);
    FUN_03f5c2a4(&DAT_09190050);
    FUN_03f5c2a4(&DAT_0920d5e8);
    DAT_09522641 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190050);
  System_Object___ctor(lVar1,0);
  if (param_3 != (long *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
    uVar3 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar3 = System_String__Concat(uVar3,DAT_0920d5e8,0);
    if (lVar2 != 0) {
      uVar3 = System_Type__GetProperty(lVar2,uVar3,0x34,0);
      uVar4 = System_Reflection_MemberInfo__op_Equality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)(**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        uVar3 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        uVar3 = System_String__Concat(uVar3,DAT_0920d5e8,0);
        if (plVar5 == (long *)0x0) goto LAB_076aa884;
        uVar3 = (**(code **)(*plVar5 + 0x6f8))(plVar5,uVar3,0x34,*(undefined8 *)(*plVar5 + 0x700));
      }
      uVar4 = System_Reflection_MemberInfo__op_Equality(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberUnderlyingType(uVar3,0);
        lVar2 = DAT_09535400;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar7 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
        uVar4 = System_Type__op_Inequality(uVar6,uVar7,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_09187480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory(0);
          if ((lVar2 != 0) && (uVar6 = FUN_04d14e94(lVar2,uVar3,DAT_091d7118), lVar1 != 0)) {
            *(undefined8 *)(lVar1 + 0x10) = uVar6;
            thunk_FUN_03f5d7b8();
            uVar6 = thunk_FUN_03f9944c(DAT_0917dff8);
            FUN_05d78cfc(uVar6,lVar1,DAT_091e8d80,0);
            if (param_2 != 0) {
              *(undefined8 *)(param_2 + 0xc0) = uVar6;
              thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xc0),uVar6);
              if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__CanSetMemberValue
                                (uVar3,param_4 & 1,0,0);
              if ((uVar4 & 1) == 0) {
                return;
              }
              if (*(int *)(DAT_09187480 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar1 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                (0);
              if (lVar1 != 0) {
                uVar3 = FUN_04d15244(lVar1,uVar3,DAT_091d7130);
                *(undefined8 *)(param_2 + 200) = uVar3;
                thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 200),uVar3);
                return;
              }
            }
          }
          goto LAB_076aa884;
        }
      }
      return;
    }
  }
LAB_076aa884:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

