// rea decompile_all
// name: System.Collections.Hashtable$$OnDeserialization
// address: 0x755f914
// body: available
// range: 0x755f914-0x7560183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75600a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75600f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75600f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7560100 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable__OnDeserialization(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  int local_6c;
  long local_68;
  
  if ((DAT_095219ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182820);
    FUN_03f5c2a4(&DAT_0919b8d0);
    FUN_03f5c2a4(&DAT_0919b8d8);
    FUN_03f5c2a4(&DAT_09171b58);
    FUN_03f5c2a4(&DAT_09185800);
    FUN_03f5c2a4(&DAT_09171bd8);
    FUN_03f5c2a4(&DAT_09185b30);
    FUN_03f5c2a4(&DAT_09171c38);
    FUN_03f5c2a4(&DAT_09185e18);
    FUN_03f5c2a4(&DAT_09170c10);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09206690);
    FUN_03f5c2a4(&DAT_09203dd8);
    FUN_03f5c2a4(&DAT_09212dd8);
    FUN_03f5c2a4(&DAT_09206640);
    FUN_03f5c2a4(&DAT_09206fc0);
    FUN_03f5c2a4(&DAT_09203db8);
    FUN_03f5c2a4(&DAT_091fed48);
    FUN_03f5c2a4(&DAT_09212e80);
    FUN_03f5c2a4(&DAT_09180a48);
    DAT_095219ad = 1;
  }
  local_68 = 0;
  plVar11 = (long *)(param_1 + 0x10);
  if (*plVar11 != 0) {
    return;
  }
  lVar4 = System_Collections_Hashtable__get_SerializationInfoTable();
  if (lVar4 == 0) {
LAB_075600f4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06d9ef34(lVar4,param_1,&local_68,DAT_0919b8d8);
  if (local_68 == 0) {
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar6 = thunk_FUN_03f9944c();
    puVar9 = &DAT_092098f8;
  }
  else {
    lVar4 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(local_68,0);
    if (lVar4 == 0) goto LAB_075600f4;
    uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar4,0);
    if ((uVar5 & 1) == 0) {
      local_6c = 0;
      lVar15 = 0;
      lVar14 = 0;
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      local_6c = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      do {
        uVar6 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar4,0);
        uVar2 = <PrivateImplementationDetails>__ComputeStringHash(uVar6,0);
        if (uVar2 < 0x602b32ee) {
          if (uVar2 == 0x351df9d2) {
            uVar5 = System_String__op_Equality(uVar6,DAT_091fed48,0);
            lVar7 = local_68;
            uVar6 = DAT_09171b58;
            if ((uVar5 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
              if (lVar7 == 0) goto LAB_075600f4;
              lVar7 = System_Runtime_Serialization_SerializationInfo__GetValue
                                (lVar7,DAT_091fed48,uVar6,0);
              uVar6 = DAT_09185800;
              if (lVar7 != 0) {
                lVar15 = thunk_FUN_03f99350(lVar7,DAT_09185800);
                lVar8 = lVar15;
                goto joined_r0x0755fe90;
              }
              lVar15 = 0;
            }
          }
          else if (uVar2 == 0x4939908b) {
            uVar5 = System_String__op_Equality(uVar6,DAT_09206640,0);
            lVar7 = local_68;
            uVar6 = DAT_09171bd8;
            if ((uVar5 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
              if (lVar7 == 0) goto LAB_075600f4;
              lVar7 = System_Runtime_Serialization_SerializationInfo__GetValue
                                (lVar7,DAT_09206640,uVar6,0);
              uVar6 = DAT_09185b30;
              if (lVar7 == 0) {
                lVar8 = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              else {
                lVar8 = thunk_FUN_03f99350(lVar7,DAT_09185b30);
                uVar10 = DAT_09185b30;
                if (lVar8 == 0) goto LAB_075600f8;
                *(long *)(param_1 + 0x40) = lVar8;
                lVar8 = thunk_FUN_03f99350(lVar7,uVar10);
                uVar6 = uVar10;
                if (lVar8 == 0) goto LAB_075600f8;
              }
              thunk_FUN_03f5d7b8(param_1 + 0x40,lVar8);
            }
          }
          else if ((uVar2 == 0x602b32ed) &&
                  (uVar5 = System_String__op_Equality(uVar6,DAT_09206690,0), lVar7 = local_68,
                  uVar6 = DAT_09170c10, (uVar5 & 1) != 0)) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
            if (lVar7 == 0) goto LAB_075600f4;
            lVar7 = System_Runtime_Serialization_SerializationInfo__GetValue
                              (lVar7,DAT_09206690,uVar6,0);
            uVar6 = DAT_09180318;
            if (lVar7 != 0) {
              lVar13 = thunk_FUN_03f99350(lVar7,DAT_09180318);
              lVar8 = lVar13;
              goto joined_r0x0755fe90;
            }
            lVar13 = 0;
          }
        }
        else if (uVar2 < 0x94138db6) {
          if (uVar2 == 0x8d4d225b) {
            uVar5 = System_String__op_Equality(uVar6,DAT_09212dd8,0);
            lVar7 = local_68;
            uVar6 = DAT_09170c10;
            if ((uVar5 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
              if (lVar7 == 0) goto LAB_075600f4;
              lVar7 = System_Runtime_Serialization_SerializationInfo__GetValue
                                (lVar7,DAT_09212dd8,uVar6,0);
              uVar6 = DAT_09180318;
              if (lVar7 != 0) {
                lVar12 = thunk_FUN_03f99350(lVar7,DAT_09180318);
                lVar8 = lVar12;
                goto joined_r0x0755fe90;
              }
              lVar12 = 0;
            }
          }
          else if ((uVar2 == 0x94138db5) &&
                  (uVar5 = System_String__op_Equality(uVar6,DAT_09203db8,0), lVar7 = local_68,
                  uVar6 = DAT_09171c38, (uVar5 & 1) != 0)) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
            if (lVar7 == 0) goto LAB_075600f4;
            lVar7 = System_Runtime_Serialization_SerializationInfo__GetValue
                              (lVar7,DAT_09203db8,uVar6,0);
            uVar6 = DAT_09185e18;
            if (lVar7 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = thunk_FUN_03f99350(lVar7,DAT_09185e18);
              lVar8 = lVar14;
joined_r0x0755fe90:
              if (lVar8 == 0) {
LAB_075600f8:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar7,uVar6);
              }
            }
          }
        }
        else if (uVar2 == 0xc80ab660) {
          uVar5 = System_String__op_Equality(uVar6,DAT_09203dd8,0);
          if ((uVar5 & 1) != 0) {
            if (local_68 == 0) goto LAB_075600f4;
            local_6c = System_Runtime_Serialization_SerializationInfo__GetInt32
                                 (local_68,DAT_09203dd8,0);
          }
        }
        else if ((uVar2 == 0xcf9da972) &&
                (uVar5 = System_String__op_Equality(uVar6,DAT_09206fc0,0), (uVar5 & 1) != 0)) {
          if (local_68 == 0) goto LAB_075600f4;
          uVar3 = System_Runtime_Serialization_SerializationInfo__GetSingle(local_68,DAT_09206fc0,0)
          ;
          *(undefined4 *)(param_1 + 0x24) = uVar3;
        }
        uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar4,0);
      } while ((uVar5 & 1) != 0);
    }
    fVar16 = *(float *)(param_1 + 0x24) * (float)local_6c;
    iVar1 = -0x80000000;
    if (fVar16 != INFINITY) {
      iVar1 = (int)fVar16;
    }
    *(int *)(param_1 + 0x20) = iVar1;
    if ((*(long *)(param_1 + 0x40) == 0) && (lVar15 != 0 || lVar14 != 0)) {
      uVar6 = thunk_FUN_03f9944c(DAT_09182820);
      System_Collections_CompatibleComparer___ctor(uVar6,lVar14,lVar15,0);
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      thunk_FUN_03f5d7b8(param_1 + 0x40,uVar6);
    }
    lVar4 = FUN_03f5c394(DAT_09180a48,local_6c);
    *plVar11 = lVar4;
    thunk_FUN_03f5d7b8(plVar11,lVar4);
    if (lVar13 == 0) {
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar6 = thunk_FUN_03f9944c();
      puVar9 = &DAT_0920f750;
    }
    else if (lVar12 == 0) {
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar6 = thunk_FUN_03f9944c();
      puVar9 = &DAT_09210368;
    }
    else {
      uVar2 = *(uint *)(lVar13 + 0x18);
      if (uVar2 == *(uint *)(lVar12 + 0x18)) {
        if (0 < (int)uVar2) {
          lVar4 = 0;
          do {
            if (uVar2 <= (uint)lVar4) {
LAB_075600a8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar15 = *(long *)(lVar13 + 0x20 + lVar4 * 8);
            if (lVar15 == 0) {
              thunk_FUN_03fc39d4(&DAT_0918a948);
              uVar6 = thunk_FUN_03f9944c();
              puVar9 = &DAT_09209c68;
              goto LAB_075600c8;
            }
            if (*(uint *)(lVar12 + 0x18) <= (uint)lVar4) goto LAB_075600a8;
            System_Collections_Hashtable__Insert
                      (param_1,lVar15,*(undefined8 *)(lVar12 + 0x20 + lVar4 * 8),1);
            uVar2 = *(uint *)(lVar13 + 0x18);
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < (int)uVar2);
        }
        if (local_68 != 0) {
          uVar3 = System_Runtime_Serialization_SerializationInfo__GetInt32(local_68,DAT_09212e80,0);
          thunk_FUN_03f6a5cc();
          *(undefined4 *)(param_1 + 0x28) = uVar3;
          lVar4 = System_Collections_Hashtable__get_SerializationInfoTable();
          if (lVar4 != 0) {
            FUN_06d9ecd4(lVar4,param_1,DAT_0919b8d0);
            return;
          }
        }
        goto LAB_075600f4;
      }
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar6 = thunk_FUN_03f9944c();
      puVar9 = &DAT_0920f748;
    }
  }
LAB_075600c8:
  uVar10 = thunk_FUN_03fc39d4(puVar9);
  System_Runtime_Serialization_SerializationException___ctor(uVar6,uVar10,0);
  uVar10 = thunk_FUN_03fc39d4(&DAT_091ce718);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar10);
}

