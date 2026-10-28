// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitSerialize
// address: 0x74bf2b4
// body: available
// range: 0x74bf2b4-0x74bf813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bf3d4 to 0x74bf814 System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitNoMembers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74bf6ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bf7f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bf804 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bf810 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSerialize
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,long *param_9)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_58;
  
  if ((DAT_09521481 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_091865b0);
    FUN_03f5c2a4(&DAT_091865e8);
    FUN_03f5c2a4(&DAT_09186790);
    FUN_03f5c2a4(&DAT_0918a968);
    DAT_09521481 = 1;
  }
  local_58 = 0;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x60) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),param_6);
  if (param_2 != 0) {
    lVar2 = System_Object__GetType(param_2,0);
    plVar8 = (long *)(param_1 + 0x20);
    *plVar8 = lVar2;
    thunk_FUN_03f5d7b8(plVar8,lVar2);
    if (*plVar8 != 0) {
      uVar3 = System_Type__get_IsArray(*plVar8,0);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2b) = 1;
        System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitNoMembers(param_1);
        return;
      }
      if (param_9 != (long *)0x0) {
        (**(code **)(*param_9 + 0x178))
                  (param_9,*(undefined8 *)(param_1 + 0x20),param_1 + 0x80,param_1 + 0x78,
                   *(undefined8 *)(*param_9 + 0x180));
      }
      if ((param_8 != 0) && (*(long *)(param_8 + 0x48) != 0)) {
        System_Runtime_Serialization_SerializationObjectManager__RegisterObject
                  (*(long *)(param_8 + 0x48),param_2,0);
        if (param_3 != (long *)0x0) {
          lVar2 = *param_3;
          lVar11 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09186790) {
                puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_074bf46c;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_09186790,0);
LAB_074bf46c:
          lVar2 = (*(code *)*puVar4)(param_3,lVar11,param_4,param_5,&local_58,puVar4[1]);
          plVar10 = (long *)(param_1 + 0x48);
          *plVar10 = lVar2;
          thunk_FUN_03f5d7b8(plVar10,lVar2);
          if (lVar2 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            uVar5 = thunk_FUN_03f9944c(DAT_0918a968);
            System_Runtime_Serialization_SerializationInfo___ctor(uVar5,uVar9,param_7,0);
            puVar4 = (undefined8 *)(param_1 + 0x30);
            *puVar4 = uVar5;
            thunk_FUN_03f5d7b8(puVar4,uVar5);
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar3 = System_Type__get_IsPrimitive(*(long *)(param_1 + 0x20),0);
              if ((uVar3 & 1) == 0) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_074bf6ec;
                lVar2 = *plVar10;
                uVar5 = *puVar4;
                uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                if (uVar3 != 0) {
                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == DAT_091865e8) {
                      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_074bf6ac;
                    }
                    uVar3 = uVar3 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091865e8,0);
LAB_074bf6ac:
                (*(code *)*puVar4)(plVar10,param_2,uVar5,param_4,param_5,puVar4[1]);
              }
              System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSiWrite(param_1);
              return;
            }
            goto LAB_074bf6ec;
          }
        }
        lVar2 = thunk_FUN_03f99350(param_2,DAT_091865b0);
        if (lVar2 == 0) {
          System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitMemberInfo(param_1);
        }
        else {
          plVar10 = (long *)*plVar8;
          if (plVar10 == (long *)0x0) goto LAB_074bf6ec;
          uVar3 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
          if ((uVar3 & 1) == 0) {
            uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar5 = FUN_03f5c394(uVar5,2);
            plVar10 = (long *)*plVar8;
            FUN_039b1d98(plVar10);
            uVar9 = (**(code **)(*plVar10 + 0x2f8))(plVar10,*(undefined8 *)(*plVar10 + 0x300));
            FUN_039b1d98(uVar5);
            FUN_039b0da0(uVar5,uVar9);
            FUN_039af17c(uVar5,0,uVar9);
            plVar8 = (long *)*plVar8;
            FUN_039b1d98(plVar8);
            plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310))
            ;
            FUN_039b1d98();
            uVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
            FUN_039b0da0(uVar5,uVar9);
            FUN_039af17c(uVar5,1,uVar9);
            uVar9 = thunk_FUN_03fc39d4(&DAT_09211190);
            uVar5 = System_Environment__GetResourceString(uVar9,uVar5,0);
            thunk_FUN_03fc39d4(&DAT_0918a948);
            uVar9 = thunk_FUN_03f9944c();
            System_Runtime_Serialization_SerializationException___ctor(uVar9,uVar5,0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_091df3a8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar9,uVar5);
          }
          lVar2 = *plVar8;
          if (*(int *)(DAT_09184940 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Runtime_Serialization_FormatterServices__UnsafeTypeForwardersIsEnabled(0);
          uVar5 = thunk_FUN_03f9944c(DAT_0918a968);
          System_Runtime_Serialization_SerializationInfo___ctor
                    (uVar5,lVar2,param_7,(uVar1 ^ 0xffffffff) & 1);
          puVar4 = (undefined8 *)(param_1 + 0x30);
          *puVar4 = uVar5;
          thunk_FUN_03f5d7b8(puVar4,uVar5);
          lVar2 = DAT_091865b0;
          uVar5 = *puVar4;
          lVar6 = thunk_FUN_03f99350(param_2,DAT_091865b0);
          lVar11 = DAT_091865b0;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_2,lVar2);
          }
          plVar8 = (long *)thunk_FUN_03f99350(param_2,DAT_091865b0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_2,lVar11);
          }
          lVar2 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar11) {
                puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_074bf66c;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar8,lVar11,0);
LAB_074bf66c:
          (*(code *)*puVar4)(plVar8,uVar5,param_4,param_5,puVar4[1]);
          System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSiWrite(param_1);
        }
        System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x80));
        return;
      }
    }
  }
LAB_074bf6ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

