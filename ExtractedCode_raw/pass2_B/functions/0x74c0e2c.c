// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$InitMemberInfo
// address: 0x74c0e2c
// body: available
// range: 0x74c0e2c-0x74c1077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1068 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1074 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitMemberInfo(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if ((DAT_0952148c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a8b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952148c = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = thunk_FUN_03f9944c(DAT_0918a8b8);
  System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(lVar2,uVar6);
  plVar7 = (long *)(param_1 + 0x30);
  *plVar7 = lVar2;
  thunk_FUN_03f5d7b8(plVar7,lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lVar2 = *plVar7;
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_09184940 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Runtime_Serialization_FormatterServices__GetSerializableMembers
                    (uVar10,uVar6,uVar1,0);
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)(lVar2 + 0x28);
    *puVar8 = uVar6;
    thunk_FUN_03f5d7b8(puVar8,uVar6);
    uVar6 = DAT_091805f8;
    lVar2 = *plVar7;
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x18);
      uVar6 = FUN_03f5c394(uVar6);
      *(undefined8 *)(lVar2 + 0x30) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30),uVar6);
      lVar2 = *(long *)(param_1 + 0x30);
      uVar6 = FUN_03f5c394(DAT_09180748,*(undefined4 *)(param_1 + 0x28));
      if (lVar2 != 0) {
        puVar8 = (undefined8 *)(lVar2 + 0x38);
        *puVar8 = uVar6;
        thunk_FUN_03f5d7b8(puVar8,uVar6);
        if (0 < *(int *)(param_1 + 0x28)) {
          uVar9 = 0;
          lVar2 = 0x20;
          do {
            lVar4 = *plVar7;
            if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0)) goto LAB_074c1064;
            if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_074c1068:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar3 = *(long **)(lVar5 + lVar2);
            if (plVar3 == (long *)0x0) goto LAB_074c1064;
            lVar4 = *(long *)(lVar4 + 0x30);
            uVar6 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            if (lVar4 == 0) goto LAB_074c1064;
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_074c1068;
            *(undefined8 *)(lVar4 + lVar2) = uVar6;
            uVar6 = thunk_FUN_03f5d7b8(lVar4 + lVar2,uVar6);
            lVar4 = *plVar7;
            if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0)) goto LAB_074c1064;
            if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_074c1068;
            plVar3 = *(long **)(lVar4 + 0x38);
            lVar4 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberType
                              (uVar6,*(undefined8 *)(lVar5 + lVar2));
            if (plVar3 == (long *)0x0) goto LAB_074c1064;
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,0);
            }
            if (*(uint *)(plVar3 + 3) <= uVar9) goto LAB_074c1068;
            *(long *)((long)plVar3 + lVar2) = lVar4;
            thunk_FUN_03f5d7b8((long)plVar3 + lVar2,lVar4);
            uVar9 = uVar9 + 1;
            lVar2 = lVar2 + 8;
          } while ((int)uVar9 < *(int *)(param_1 + 0x28));
        }
        *(undefined2 *)(param_1 + 0x2d) = 0x101;
        return;
      }
    }
  }
LAB_074c1064:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

