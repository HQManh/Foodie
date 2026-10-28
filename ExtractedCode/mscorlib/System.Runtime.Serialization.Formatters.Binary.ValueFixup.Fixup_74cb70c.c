// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ValueFixup$$Fixup
// address: 0x74cb70c
// body: available
// range: 0x74cb70c-0x74cba13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cb7b4 to 0x75dc610 System.Array$$SetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74cb8b8 to 0x74ad13c System.Runtime.Serialization.FormatterServices$$SerializationSetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74cb960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cba10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ValueFixup__Fixup
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_34;
  
  if ((DAT_095214dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_09171a38);
    FUN_03f5c2a4(&DAT_0918cad0);
    FUN_03f5c2a4(&DAT_09212b98);
    DAT_095214dd = 1;
  }
  uVar8 = DAT_09171a38;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 3) {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x2c) == '\0') {
          uVar8 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberInfo
                            (lVar2,*(undefined8 *)(param_1 + 0x40),0);
          uVar3 = System_Reflection_MemberInfo__op_Inequality(uVar8,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (((*(long *)(param_1 + 0x38) != 0) && (param_3 != 0)) &&
             (plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0x20), plVar4 != (long *)0x0)) {
            uVar7 = *(undefined8 *)(param_3 + 0x58);
            uVar5 = *(undefined8 *)(param_2 + 0x58);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x198);
            uVar6 = *(undefined8 *)(*plVar4 + 0x1a0);
            goto LAB_074cb938;
          }
        }
        else if ((param_3 != 0) && (plVar4 = *(long **)(lVar2 + 0x20), plVar4 != (long *)0x0)) {
          uVar7 = *(undefined8 *)(param_3 + 0x58);
          uVar5 = *(undefined8 *)(param_2 + 0x58);
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x1a8);
          uVar6 = *(undefined8 *)(*plVar4 + 0x1b0);
LAB_074cb938:
                    /* WARNING: Could not recover jumptable at 0x074cb948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar4,uVar7,uVar8,uVar5,uVar6);
          return;
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0xe8);
      if (iVar1 == 2) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = System_Type__GetTypeFromHandle(uVar8,0);
        uVar8 = **(undefined8 **)(DAT_0918cad0 + 0xb8);
        thunk_FUN_03f6a5cc();
        uVar3 = System_Reflection_MemberInfo__op_Equality(uVar8,0,0);
        if ((uVar3 & 1) != 0) {
          if ((lVar2 == 0) || (lVar2 = System_Type__GetMember(lVar2,DAT_09212b98,0), lVar2 == 0))
          goto LAB_074cb960;
          if (*(int *)(lVar2 + 0x18) != 1) {
            uVar8 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar8 = FUN_03f5c394(uVar8,1);
            FUN_039b1d98(lVar2);
            local_34 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_34);
            FUN_039b1d98(uVar8);
            FUN_039b0da0(uVar8,uVar6);
            FUN_039af17c(uVar8,0,uVar6);
            uVar6 = thunk_FUN_03fc39d4(&DAT_09203e10);
            uVar8 = System_Environment__GetResourceString(uVar6,uVar8,0);
            thunk_FUN_03fc39d4(&DAT_0918a948);
            uVar6 = thunk_FUN_03f9944c();
            System_Runtime_Serialization_SerializationException___ctor(uVar6,uVar8,0);
            uVar8 = thunk_FUN_03fc39d4(&DAT_091de948);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,uVar8);
          }
          uVar8 = *(undefined8 *)(lVar2 + 0x20);
          thunk_FUN_03f6a5cc();
          **(undefined8 **)(DAT_0918cad0 + 0xb8) = uVar8;
          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918cad0 + 0xb8),uVar8);
        }
        uVar7 = **(undefined8 **)(DAT_0918cad0 + 0xb8);
        thunk_FUN_03f6a5cc();
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(DAT_09184940 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_Serialization_FormatterServices__SerializationSetValue(uVar7,uVar8,uVar6,0);
        return;
      }
      if (iVar1 != 1) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Array__SetValue(*(long *)(param_1 + 0x18),uVar6,*(undefined8 *)(param_1 + 0x20),0);
        return;
      }
    }
  }
LAB_074cb960:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

