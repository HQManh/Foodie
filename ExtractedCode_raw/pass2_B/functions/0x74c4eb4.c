// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$WriteArray
// address: 0x74c4eb4
// body: available
// range: 0x74c4eb4-0x74c55c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c546c to 0x74c99e8 System.Runtime.Serialization.Formatters.Binary.SerStack$$Push (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c5520 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c55a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c55ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c55b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c55c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArray
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  
  if ((DAT_095214aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095214aa = 1;
  }
  lVar9 = param_3;
  if (((param_3 == 0) &&
      (lVar9 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                         (param_1,param_2), lVar9 == 0)) ||
     (*(undefined1 *)(lVar9 + 0x39) = 1, param_2 == 0)) goto LAB_074c55a4;
  uVar25 = *(undefined8 *)(param_2 + 0x68);
  plVar23 = *(long **)(param_2 + 0x18);
  *(undefined8 *)(lVar9 + 0x18) = uVar25;
  if (plVar23 != (long *)0x0) {
    if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
       (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
        DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar23);
    }
  }
  plVar10 = *(long **)(param_2 + 0x20);
  if ((plVar10 == (long *)0x0) ||
     (lVar11 = (**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450)),
     lVar11 == 0)) goto LAB_074c55a4;
  uVar12 = System_Type__get_IsPrimitive(lVar11,0);
  if ((uVar12 & 1) == 0) {
    lVar24 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                       (lVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70));
    uVar14 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                       (param_1,lVar24);
    if (lVar24 == 0) goto LAB_074c55a4;
    *(undefined8 *)(lVar24 + 0x70) = uVar14;
    lVar13 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                       (param_1,lVar24);
  }
  else {
    uVar7 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__ToCode(param_1,lVar11);
    lVar13 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                       (param_1,lVar11,0,uVar7,0);
    lVar24 = 0;
  }
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) goto LAB_074c55a4;
  bVar6 = System_Type__get_IsArray(*(long *)(lVar13 + 0x30),0);
  *(undefined8 *)(lVar9 + 0x18) = uVar25;
  *(byte *)(lVar13 + 0x39) = bVar6 & 1;
  *(undefined8 *)(lVar13 + 0x18) = uVar25;
  *(undefined1 *)(lVar9 + 0x39) = 1;
  *(undefined2 *)(lVar13 + 0x3b) = *(undefined2 *)(lVar9 + 0x3b);
  *(undefined1 *)(lVar13 + 0x3d) = *(undefined1 *)(lVar9 + 0x3d);
  if (plVar23 == (long *)0x0) goto LAB_074c55a4;
  uVar8 = System_Array__get_Rank(plVar23,0);
  lVar15 = FUN_03f5c394(DAT_091801b8,uVar8);
  lVar16 = FUN_03f5c394(DAT_091801b8,uVar8);
  auVar26 = FUN_03f5c394(DAT_091801b8,uVar8);
  uVar14 = auVar26._8_8_;
  lVar17 = auVar26._0_8_;
  if (0 < (int)uVar8) {
    uVar12 = 0;
    do {
      uVar7 = System_Array__GetLength(plVar23,uVar12 & 0xffffffff,0);
      if (lVar15 == 0) goto LAB_074c55a4;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_074c5520;
      *(undefined4 *)(lVar15 + 0x20 + uVar12 * 4) = uVar7;
      uVar7 = System_Array__GetLowerBound(plVar23,uVar12 & 0xffffffff,0);
      if (lVar16 == 0) goto LAB_074c55a4;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_074c5520;
      *(undefined4 *)(lVar16 + 0x20 + uVar12 * 4) = uVar7;
      uVar7 = System_Array__GetUpperBound(plVar23,uVar12 & 0xffffffff,0);
      if (lVar17 == 0) goto LAB_074c55a4;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_074c5520;
      *(undefined4 *)(lVar17 + 0x20 + uVar12 * 4) = uVar7;
      uVar12 = uVar12 + 1;
      uVar14 = extraout_x1;
    } while (uVar8 != uVar12);
  }
  lVar18 = DAT_09182b98;
  bVar4 = uVar8 != 1;
  uVar7 = 2;
  if (bVar4) {
    uVar7 = 3;
  }
  uVar21 = 3;
  if (!bVar4) {
    uVar21 = 1;
  }
  bVar5 = *(char *)(lVar13 + 0x39) != '\0';
  iVar1 = *(int *)(DAT_09182b98 + 0xe4);
  if (!bVar5) {
    uVar7 = uVar21;
  }
  *(undefined4 *)(lVar13 + 0x40) = uVar7;
  if (iVar1 == 0) {
    FUN_03f5c424();
    lVar18 = DAT_09182b98;
    uVar14 = extraout_x1_00;
  }
  uVar3 = DAT_0917fc88;
  lVar19 = *(long *)(lVar18 + 0xb8);
  if ((uVar8 == 1) && (lVar11 == *(long *)(lVar19 + 0x50))) {
    if (lVar16 == 0) goto LAB_074c55a4;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_074c5520;
    if (*(int *)(lVar16 + 0x20) == 0) {
      if (lVar15 != 0) {
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_074c5520;
        lVar11 = *(long *)(param_1 + 0x40);
        if (lVar11 != 0) {
          uVar7 = *(undefined4 *)(lVar15 + 0x20);
          lVar15 = thunk_FUN_03f99350(plVar23,DAT_0917fc88);
          if (lVar15 != 0) {
            System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull
                      (lVar11);
            System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSingleArray
                      (lVar11,extraout_x1_02,lVar9,lVar24,lVar13,uVar7,0,lVar15);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar23,uVar3);
        }
      }
      goto LAB_074c55a4;
    }
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar19 = *(long *)(DAT_09182b98 + 0xb8);
    uVar14 = extraout_x1_01;
  }
  if (lVar11 == *(long *)(lVar19 + 0xc0)) {
LAB_074c5220:
    *(undefined1 *)(lVar9 + 0x3c) = 1;
    *(undefined1 *)(lVar13 + 0x3c) = 1;
  }
  else {
    auVar26 = System_Nullable__GetUnderlyingType(lVar11,0);
    uVar14 = auVar26._8_8_;
    if (auVar26._0_8_ != 0) goto LAB_074c5220;
  }
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_074c55a4;
  if ((*(byte *)(*(long *)(param_1 + 0x68) + 0x10) & 1) != 0) {
    *(undefined1 *)(lVar9 + 0x3b) = 1;
    *(undefined1 *)(lVar13 + 0x3b) = 1;
  }
  if (bVar5 || bVar4) {
    lVar11 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(lVar9 + 0x18) = uVar25;
    if (bVar5 && !bVar4) {
      if (lVar15 == 0) goto LAB_074c55a4;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_074c5520;
      if (lVar16 == 0) goto LAB_074c55a4;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_074c5520;
      if (lVar11 == 0) goto LAB_074c55a4;
      System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray
                (lVar11,uVar14,lVar9,lVar24,lVar13,*(undefined4 *)(lVar15 + 0x20),
                 *(undefined4 *)(lVar16 + 0x20));
      uVar25 = DAT_09180318;
      lVar11 = thunk_FUN_03f99350(plVar23,DAT_09180318);
      if (lVar11 != 0) {
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (lVar17 == 0) goto LAB_074c55a4;
          if (*(int *)(lVar17 + 0x18) != 0) {
            lVar24 = (long)*(int *)(lVar16 + 0x20);
            do {
              if (*(int *)(lVar17 + 0x20) + 1 <= lVar24) goto LAB_074c5378;
              if (*(uint *)(lVar11 + 0x18) <= (uint)lVar24) break;
              System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
                        (param_1,param_2,lVar13,*(undefined8 *)(lVar11 + 0x20 + lVar24 * 8));
              lVar24 = lVar24 + 1;
            } while (*(int *)(lVar17 + 0x18) != 0);
          }
        }
        goto LAB_074c5520;
      }
      goto LAB_074c55b0;
    }
    if (lVar11 == 0) goto LAB_074c55a4;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteRectangleArray
              (lVar11,uVar14,lVar9,lVar24,lVar13,uVar8,lVar15,lVar16);
    if (0 < (int)uVar8) {
      if (lVar15 == 0) goto LAB_074c55a4;
      iVar1 = *(int *)(lVar15 + 0x18);
      piVar20 = (int *)(lVar15 + 0x20);
      uVar2 = uVar8;
      do {
        if (iVar1 == 0) goto LAB_074c5520;
        if (*piVar20 == 0) goto LAB_074c5410;
        uVar2 = uVar2 - 1;
        piVar20 = piVar20 + 1;
        iVar1 = iVar1 + -1;
      } while (uVar2 != 0);
    }
    System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteRectangle
              (param_1,param_2,uVar8,lVar15,plVar23,lVar13,lVar16);
LAB_074c5410:
    lVar11 = *(long *)(param_1 + 0x40);
joined_r0x074c5414:
    if (lVar11 == 0) goto LAB_074c55a4;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull();
  }
  else {
    if (lVar15 == 0) goto LAB_074c55a4;
    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_074c5520;
    if (lVar16 == 0) goto LAB_074c55a4;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_074c5520;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_074c55a4;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSingleArray
              (*(long *)(param_1 + 0x40),uVar14,lVar9,lVar24,lVar13,*(undefined4 *)(lVar15 + 0x20),
               *(undefined4 *)(lVar16 + 0x20),plVar23);
    uVar7 = *(undefined4 *)(lVar13 + 0x28);
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray(uVar7);
    if ((uVar12 & 1) == 0) {
LAB_074c52bc:
      uVar12 = System_Type__get_IsValueType(lVar11,0);
      uVar25 = DAT_09180318;
      lVar11 = 0;
      if (((uVar12 & 1) == 0) && (lVar11 = thunk_FUN_03f99350(plVar23,DAT_09180318), lVar11 == 0)) {
LAB_074c55b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar23,uVar25);
      }
      if (lVar17 == 0) goto LAB_074c55a4;
      if ((*(int *)(lVar17 + 0x18) == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
LAB_074c5520:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar8 = *(uint *)(lVar16 + 0x20);
      iVar1 = *(int *)(lVar17 + 0x20) + 1;
      if ((int)uVar8 < iVar1) {
        lVar24 = (long)iVar1 - (long)(int)uVar8;
        puVar22 = (undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
        do {
          if (lVar11 == 0) {
            uVar25 = System_Array__GetValue(plVar23,uVar8,0);
          }
          else {
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_074c5520;
            uVar25 = *puVar22;
          }
          System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
                    (param_1,param_2,lVar13,uVar25);
          lVar24 = lVar24 + -1;
          puVar22 = puVar22 + 1;
          uVar8 = uVar8 + 1;
        } while (lVar24 != 0);
      }
LAB_074c5378:
      lVar11 = *(long *)(param_1 + 0x40);
      goto joined_r0x074c5414;
    }
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_074c5520;
    if (*(int *)(lVar16 + 0x20) != 0) goto LAB_074c52bc;
  }
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    System_Runtime_Serialization_Formatters_Binary_SerStack__Push
              (*(long *)(param_1 + 0xb8),lVar13,0);
    if (param_3 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                (*(long *)(param_1 + 0xb8),lVar9,0);
      return;
    }
  }
LAB_074c55a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

