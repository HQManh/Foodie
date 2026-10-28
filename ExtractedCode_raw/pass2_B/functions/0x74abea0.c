// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$InternalGetSerializableMembers
// address: 0x74abea0
// body: available
// range: 0x74abea0-0x74ac547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74abf94 to 0x3f5c394 FUN_03f5c394 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ac3a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac3a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac3ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac4c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac4cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ac544 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Serialization_FormatterServices__InternalGetSerializableMembers(long *param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint local_6c;
  long local_68;
  
  if ((DAT_095213f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_091afda8);
    FUN_03f5c2a4(&DAT_091afda0);
    FUN_03f5c2a4(&DAT_091afdb0);
    FUN_03f5c2a4(&DAT_0917cb80);
    FUN_03f5c2a4(&DAT_091802a8);
    FUN_03f5c2a4(&DAT_0918a3a8);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0918a950);
    DAT_095213f8 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  if (param_1 == (long *)0x0) {
LAB_074ac3a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_Type__get_IsInterface(param_1,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_03f5c394(DAT_091802a8,0);
    return lVar6;
  }
  if (*(int *)(DAT_09184940 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  if ((uVar5 & 1) == 0) {
    uVar12 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar12 = FUN_03f5c394(uVar12,2);
    FUN_039b1d98(param_1);
    uVar13 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
    FUN_039b1d98(uVar12);
    FUN_039b0da0(uVar12,uVar13);
    FUN_039af17c(uVar12,0,uVar13);
    FUN_039b1d98(param_1);
    lVar6 = *param_1;
LAB_074ac41c:
    plVar7 = (long *)(**(code **)(lVar6 + 0x318))(param_1,*(undefined8 *)(lVar6 + 800));
    FUN_039b1d98();
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    FUN_039b1d98();
    uVar13 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    FUN_039b0da0(uVar12,uVar13);
    FUN_039af17c(uVar12,1,uVar13);
    uVar13 = thunk_FUN_03fc39d4(&DAT_09211190);
    uVar12 = System_Environment__GetResourceString(uVar13,uVar12,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar13 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar13,uVar12);
    uVar12 = thunk_FUN_03fc39d4(&DAT_091ccfa0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar13,uVar12);
  }
  if (*(int *)(DAT_09184940 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = System_Runtime_Serialization_FormatterServices__GetSerializableMembers(param_1);
  plVar7 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar7);
    }
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a400);
  }
  uVar5 = System_RuntimeType__op_Inequality(plVar7,0,0);
  lVar9 = DAT_095353e8;
  lVar15 = lVar6;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
    }
    uVar5 = System_RuntimeType__op_Inequality(plVar7,plVar8,0);
    if ((uVar5 & 1) != 0) {
      local_68 = 0;
      local_6c = 0;
      if (*(int *)(DAT_09184940 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Runtime_Serialization_FormatterServices__GetParentTypes
                        (plVar7,&local_68,&local_6c);
      uVar5 = (ulong)local_6c;
      if (0 < (int)local_6c) {
        lVar9 = thunk_FUN_03f9944c(DAT_0917cb80);
        FUN_057e0400(lVar9,DAT_091afda0);
        uVar18 = 0;
        do {
          if (local_68 == 0) goto LAB_074ac3a0;
          if (*(uint *)(local_68 + 0x18) <= uVar18) {
LAB_074ac3a4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          param_1 = *(long **)(local_68 + uVar18 * 8 + 0x20);
          if (*(int *)(DAT_09184940 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_1 == (long *)0x0) goto LAB_074ac3a0;
          uVar10 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
          if ((uVar10 & 1) == 0) {
            uVar12 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar12 = FUN_03f5c394(uVar12,2);
            FUN_039b1d98(param_1);
            uVar13 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
            FUN_039b1d98(uVar12);
            FUN_039b0da0(uVar12,uVar13);
            FUN_039af17c(uVar12,0,uVar13);
            FUN_039b1d98(param_1);
            lVar6 = *param_1;
            goto LAB_074ac41c;
          }
          lVar11 = (**(code **)(*param_1 + 0x708))(param_1,0x24,*(undefined8 *)(*param_1 + 0x710));
          bVar3 = (uVar4 & 1) == 0;
          lVar1 = 0x1c0;
          if (bVar3) {
            lVar1 = 0x300;
          }
          lVar16 = 0x1b8;
          if (bVar3) {
            lVar16 = 0x2f8;
          }
          uVar12 = (**(code **)(*param_1 + lVar16))(param_1,*(undefined8 *)(*param_1 + lVar1));
          if (lVar11 == 0) goto LAB_074ac3a0;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (0 < (int)uVar2) {
            uVar17 = 0;
            do {
              if (uVar2 <= uVar17) goto LAB_074ac3a4;
              plVar7 = *(long **)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_074ac3a0;
              uVar10 = System_Reflection_FieldInfo__get_IsNotSerialized(plVar7,0);
              if ((uVar10 & 1) == 0) {
                uVar13 = thunk_FUN_03f9944c(DAT_0918a950);
                if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918a3a8 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918a3a8 + 0x130) * 8
                             + -8) != DAT_0918a3a8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar7);
                }
                System_Runtime_Serialization_SerializationFieldInfo___ctor(uVar13,plVar7,uVar12,0);
                lVar1 = DAT_091afda8;
                if (lVar9 == 0) goto LAB_074ac3a0;
                lVar16 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_074ac3a0;
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar14 = uVar13;
                  thunk_FUN_03f5d7b8(puVar14,uVar13);
                }
                else {
                  FUN_057e0c68(lVar9,uVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar2 = *(uint *)(lVar11 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar2);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar5);
        if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x18))) {
          if (lVar6 == 0) goto LAB_074ac3a0;
          lVar15 = FUN_03f5c394(DAT_091802a8,*(int *)(lVar9 + 0x18) + *(int *)(lVar6 + 0x18));
          System_Array__Copy(lVar6,lVar15,*(undefined4 *)(lVar6 + 0x18),0);
          FUN_03eaf51c(0,DAT_091857d8,lVar9,lVar15,*(undefined4 *)(lVar6 + 0x18));
        }
      }
    }
  }
  return lVar15;
}

