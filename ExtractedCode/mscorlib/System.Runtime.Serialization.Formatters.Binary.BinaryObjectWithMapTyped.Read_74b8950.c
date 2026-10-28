// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped$$Read
// address: 0x74b8950
// body: available
// range: 0x74b8950-0x74b8c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b8c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b8c44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b8c50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped__Read
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  if ((DAT_09521451 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc30);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521451 = 1;
  }
  if (param_2 != 0) {
    uVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadString(param_2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8();
    uVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
    uVar4 = DAT_091805f8;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    lVar5 = FUN_03f5c394(uVar4);
    plVar11 = (long *)(param_1 + 0x28);
    *plVar11 = lVar5;
    thunk_FUN_03f5d7b8(plVar11,lVar5);
    lVar5 = FUN_03f5c394(DAT_0917fc30,*(undefined4 *)(param_1 + 0x20));
    plVar8 = (long *)(param_1 + 0x30);
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(plVar8,lVar5);
    uVar4 = FUN_03f5c394(DAT_09180318,*(undefined4 *)(param_1 + 0x20));
    puVar9 = (undefined8 *)(param_1 + 0x38);
    *puVar9 = uVar4;
    thunk_FUN_03f5d7b8(puVar9,uVar4);
    lVar5 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x20));
    plVar10 = (long *)(param_1 + 0x40);
    *plVar10 = lVar5;
    thunk_FUN_03f5d7b8(plVar10,lVar5);
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar12 = 0;
      lVar5 = 0x20;
      do {
        lVar13 = *plVar11;
        uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadString(param_2,0)
        ;
        if (lVar13 == 0) goto LAB_074b8c40;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_074b8c44;
        *(undefined8 *)(lVar13 + lVar5) = uVar4;
        thunk_FUN_03f5d7b8(lVar13 + lVar5,uVar4);
        uVar12 = uVar12 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar12 < (long)*(int *)(param_1 + 0x20));
      if (0 < *(int *)(param_1 + 0x20)) {
        uVar12 = 0;
        do {
          lVar5 = *plVar8;
          uVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadByte(param_2,0)
          ;
          if (lVar5 == 0) goto LAB_074b8c40;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_074b8c44;
          lVar13 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          *(uint *)(lVar5 + lVar13 + 0x20) = uVar3 & 0xff;
        } while ((long)uVar12 < (long)*(int *)(param_1 + 0x20));
        if (0 < *(int *)(param_1 + 0x20)) {
          uVar12 = 0;
          lVar13 = 0x20;
          lVar5 = 0x20;
          do {
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_074b8c40;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_074b8c44;
            iVar1 = *(int *)(lVar7 + lVar5);
            if (iVar1 - 3U < 2) {
              lVar7 = *plVar10;
              if (lVar7 == 0) goto LAB_074b8c40;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_074b8c44;
              System_Runtime_Serialization_Formatters_Binary_BinaryConverter__ReadTypeInfo
                        (iVar1,param_2,lVar7 + lVar5);
            }
            else {
              lVar7 = *plVar10;
              if (lVar7 == 0) goto LAB_074b8c40;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_074b8c44:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar11 = (long *)*puVar9;
              lVar7 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__ReadTypeInfo
                                (iVar1,param_2,lVar7 + lVar5);
              if (plVar11 == (long *)0x0) goto LAB_074b8c40;
              if ((lVar7 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
                uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar4,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar12) goto LAB_074b8c44;
              *(long *)((long)plVar11 + lVar13) = lVar7;
              thunk_FUN_03f5d7b8((long)plVar11 + lVar13,lVar7);
            }
            uVar12 = uVar12 + 1;
            lVar5 = lVar5 + 4;
            lVar13 = lVar13 + 8;
          } while ((long)uVar12 < (long)*(int *)(param_1 + 0x20));
        }
      }
    }
    if (*(int *)(param_1 + 0x10) == 5) {
      uVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadInt32(param_2,0);
      *(undefined4 *)(param_1 + 0x48) = uVar2;
    }
    return;
  }
LAB_074b8c40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

