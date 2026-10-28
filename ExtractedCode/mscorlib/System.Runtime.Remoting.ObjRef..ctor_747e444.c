// rea decompile_all
// name: System.Runtime.Remoting.ObjRef$$.ctor
// address: 0x747e444
// body: available
// range: 0x747e444-0x747e9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747e964 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e970 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e9a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e9b4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e9c0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ObjRef___ctor(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  if ((DAT_09521257 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09185768);
    FUN_03f5c2a4(&DAT_091858c0);
    FUN_03f5c2a4(&DAT_09185b28);
    FUN_03f5c2a4(&DAT_09186468);
    FUN_03f5c2a4(&DAT_09188ab8);
    FUN_03f5c2a4(&DAT_092250d8);
    FUN_03f5c2a4(&DAT_0921b4e0);
    FUN_03f5c2a4(&DAT_0921b090);
    FUN_03f5c2a4(&DAT_09220258);
    FUN_03f5c2a4(&DAT_09224560);
    FUN_03f5c2a4(&DAT_09218ab8);
    DAT_09521257 = 1;
  }
  System_Object___ctor(param_1,0);
  if ((param_2 == 0) ||
     (lVar5 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0), lVar5 == 0))
  {
LAB_0747e974:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar5,0);
  if ((uVar6 & 1) != 0) {
    bVar2 = true;
LAB_0747e584:
    uVar7 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar5,0);
    uVar6 = System_String__op_Equality(uVar7,DAT_092250d8,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = System_String__op_Equality(uVar7,DAT_09224560,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = System_String__op_Equality(uVar7,DAT_09218ab8,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = System_String__op_Equality(uVar7,DAT_0921b090,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = System_String__op_Equality(uVar7,DAT_0921b4e0,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = System_String__op_Equality(uVar7,DAT_09220258,0);
              if ((uVar6 & 1) == 0) {
                thunk_FUN_03fc39d4(&DAT_09188920);
                uVar7 = thunk_FUN_03f9944c();
                System_NotSupportedException___ctor(uVar7,0);
                uVar15 = thunk_FUN_03fc39d4(&DAT_091d4a38);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar7,uVar15);
              }
              uVar7 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar5,0);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b88);
              }
              uVar3 = System_Convert__ToInt32(uVar7,0);
              *(undefined4 *)(param_1 + 0x30) = uVar3;
              goto LAB_0747e7e0;
            }
            plVar8 = (long *)System_Runtime_Serialization_SerializationInfoEnumerator__get_Value
                                       (lVar5,0);
            lVar9 = DAT_091858c0;
            if (plVar8 == (long *)0x0) goto LAB_0747e974;
            if (*plVar8 == DAT_09535468) {
              lVar12 = thunk_FUN_03f99350(plVar8,DAT_091858c0);
              lVar10 = DAT_091858c0;
              if ((lVar12 == 0) ||
                 (plVar13 = (long *)thunk_FUN_03f99350(plVar8,DAT_091858c0), lVar9 = lVar10,
                 plVar13 == (long *)0x0)) goto LAB_0747e9c0;
              lVar9 = *plVar13;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar10) {
                    puVar14 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto LAB_0747e8e0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar14 = (undefined8 *)FUN_03f95da8(plVar13,lVar10,7);
LAB_0747e8e0:
              iVar4 = (*(code *)*puVar14)(plVar13,0,puVar14[1]);
            }
            else {
              lVar9 = DAT_09535420;
              if (*(long *)(*plVar8 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
LAB_0747e9c0:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar8,lVar9);
              }
              piVar11 = (int *)thunk_FUN_03f99594();
              iVar4 = *piVar11;
            }
            bVar2 = (bool)(iVar4 != 0 & bVar2);
            goto LAB_0747e7e0;
          }
          lVar9 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar5,0);
          uVar7 = DAT_09185b28;
          if (lVar9 == 0) {
            lVar10 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
          }
          else {
            lVar10 = thunk_FUN_03f99350(lVar9,DAT_09185b28);
            uVar15 = DAT_09185b28;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar9,uVar7);
            }
            *(long *)(param_1 + 0x28) = lVar10;
            lVar10 = thunk_FUN_03f99350(lVar9,uVar15);
            if (lVar10 == 0) goto LAB_0747e968;
          }
          lVar9 = param_1 + 0x28;
        }
        else {
          lVar9 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar5,0);
          uVar15 = DAT_09185768;
          if (lVar9 == 0) {
            lVar10 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
          }
          else {
            lVar10 = thunk_FUN_03f99350(lVar9,DAT_09185768);
            uVar7 = DAT_09185768;
            if (lVar10 == 0) goto LAB_0747e968;
            *(long *)(param_1 + 0x10) = lVar10;
            lVar10 = thunk_FUN_03f99350(lVar9,uVar7);
            uVar15 = uVar7;
            if (lVar10 == 0) goto LAB_0747e968;
          }
          lVar9 = param_1 + 0x10;
        }
      }
      else {
        lVar9 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar5,0);
        uVar15 = DAT_09186468;
        if (lVar9 == 0) {
          lVar10 = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        else {
          lVar10 = thunk_FUN_03f99350(lVar9,DAT_09186468);
          uVar7 = DAT_09186468;
          if (lVar10 == 0) {
LAB_0747e968:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar9,uVar15);
          }
          *(long *)(param_1 + 0x20) = lVar10;
          lVar10 = thunk_FUN_03f99350(lVar9,uVar7);
          uVar15 = uVar7;
          if (lVar10 == 0) goto LAB_0747e968;
        }
        lVar9 = param_1 + 0x20;
      }
      thunk_FUN_03f5d7b8(lVar9,lVar10);
    }
    else {
      plVar8 = (long *)System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar5,0);
      lVar9 = DAT_09535468;
      if (plVar8 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else if ((*plVar8 != DAT_09535468) || (*(long **)(param_1 + 0x18) = plVar8, *plVar8 != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
      thunk_FUN_03f5d7b8(param_1 + 0x18,plVar8);
    }
LAB_0747e7e0:
    uVar6 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_0747e908;
    goto LAB_0747e584;
  }
LAB_0747e910:
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ab8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(uint *)(param_1 + 0x30) = **(uint **)(DAT_09188ab8 + 0xb8) | uVar1;
  return;
LAB_0747e908:
  if (!bVar2) {
    return;
  }
  goto LAB_0747e910;
}

