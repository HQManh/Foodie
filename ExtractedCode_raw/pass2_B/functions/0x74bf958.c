// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitSiWrite
// address: 0x74bf958
// body: available
// range: 0x74bf958-0x74bfc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bfc74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bfc78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bfc84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSiWrite(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  
  if ((DAT_09521483 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a8b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521483 = 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_074bfc74;
  System_Runtime_Serialization_SerializationInfo__GetEnumerator();
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) goto LAB_074bfc74;
  uVar2 = *(undefined4 *)(lVar6 + 0x30);
  uVar7 = *(undefined8 *)(lVar6 + 0x48);
  if (*(char *)(lVar6 + 0x58) == '\0') {
    uVar9 = *(undefined8 *)(lVar6 + 0x50);
    if (*(int *)(DAT_09181c60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__GetTypeInformation
                      (uVar9);
    if ((lVar6 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_074bfc74;
    uVar9 = *(undefined8 *)(lVar6 + 0x10);
    bVar3 = *(char *)(lVar6 + 0x20) != '\0';
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x59) == '\0') goto LAB_074bfa74;
  }
  else {
    uVar9 = *(undefined8 *)(lVar6 + 0x40);
    if (*(char *)(lVar6 + 0x59) == '\0') {
      uVar7 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(DAT_09181c60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__GetTypeInformation
                        (uVar7);
      if (lVar6 == 0) goto LAB_074bfc74;
LAB_074bfa74:
      uVar7 = *(undefined8 *)(lVar6 + 0x18);
      bVar3 = *(char *)(lVar6 + 0x20) != '\0';
    }
    else {
      bVar3 = false;
    }
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0918a8b8);
  System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(lVar6,uVar9,uVar7,bVar3);
  plVar8 = (long *)(param_1 + 0x38);
  *plVar8 = lVar6;
  thunk_FUN_03f5d7b8(plVar8,lVar6);
  lVar6 = *plVar8;
  uVar7 = FUN_03f5c394(DAT_091805f8,uVar2);
  if (lVar6 != 0) {
    puVar10 = (undefined8 *)(lVar6 + 0x30);
    *puVar10 = uVar7;
    thunk_FUN_03f5d7b8(puVar10,uVar7);
    lVar6 = *plVar8;
    uVar7 = FUN_03f5c394(DAT_09180748,uVar2);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0x38);
      *puVar10 = uVar7;
      thunk_FUN_03f5d7b8(puVar10,uVar7);
      uVar7 = FUN_03f5c394(DAT_09180318,uVar2);
      puVar10 = (undefined8 *)(param_1 + 0x40);
      *puVar10 = uVar7;
      thunk_FUN_03f5d7b8(puVar10,uVar7);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar6 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(), lVar6 != 0)) {
        uVar4 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar6,0);
        if ((uVar4 & 1) != 0) {
          uVar12 = 0xffffffff;
          do {
            if (*plVar8 == 0) goto LAB_074bfc74;
            lVar11 = *(long *)(*plVar8 + 0x30);
            uVar7 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar6,0);
            if (lVar11 == 0) goto LAB_074bfc74;
            uVar1 = uVar12 + 1;
            if (*(uint *)(lVar11 + 0x18) <= uVar1) {
LAB_074bfc78:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar13 = (long)(int)uVar1;
            *(undefined8 *)(lVar11 + lVar13 * 8 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
            if (*plVar8 == 0) goto LAB_074bfc74;
            plVar14 = *(long **)(*plVar8 + 0x38);
            lVar11 = System_Runtime_Serialization_SerializationInfoEnumerator__get_ObjectType
                               (lVar6,0);
            if (plVar14 == (long *)0x0) goto LAB_074bfc74;
            if ((lVar11 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar5 == 0)) {
LAB_074bfc7c:
              uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar7,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar1) goto LAB_074bfc78;
            plVar14[lVar13 + 4] = lVar11;
            thunk_FUN_03f5d7b8(plVar14 + lVar13 + 4,lVar11);
            plVar14 = (long *)*puVar10;
            lVar11 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar6,0);
            if (plVar14 == (long *)0x0) goto LAB_074bfc74;
            if ((lVar11 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar5 == 0))
            goto LAB_074bfc7c;
            uVar12 = uVar12 + 1;
            if (*(uint *)(plVar14 + 3) <= uVar12) goto LAB_074bfc78;
            plVar14[lVar13 + 4] = lVar11;
            thunk_FUN_03f5d7b8(plVar14 + lVar13 + 4,lVar11);
            uVar4 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar6,0);
          } while ((uVar4 & 1) != 0);
        }
        *(undefined2 *)(param_1 + 0x29) = 1;
        return;
      }
    }
  }
LAB_074bfc74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

