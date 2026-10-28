// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteSingleArray
// address: 0x74be48c
// body: available
// range: 0x74be48c-0x74be75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74be6cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be754 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be758 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSingleArray
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined4 param_6,int param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((DAT_09521477 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181be0);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09521477 = 1;
  }
  System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull(param_1);
  lVar5 = FUN_03f5c394(DAT_091801b8,1);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_074be758:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined4 *)(lVar5 + 0x20) = param_6;
    if (param_7 == 0) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = FUN_03f5c394(DAT_091801b8,1);
      if (lVar6 == 0) goto LAB_074be754;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_074be758;
      uVar4 = 3;
      *(int *)(lVar6 + 0x20) = param_7;
    }
    if (param_5 != 0) {
      uVar11 = *(undefined8 *)(param_5 + 0x30);
      System_Runtime_Serialization_Formatters_Binary_NameInfo__get_NIname(param_5,0);
      uVar3 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetBinaryTypeInfo
                        (uVar11,param_4);
      plVar10 = (long *)(param_1 + 0x70);
      lVar8 = *plVar10;
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_03f9944c(DAT_09181be0);
        System_Object___ctor(lVar8,0);
        *plVar10 = lVar8;
        thunk_FUN_03f5d7b8(plVar10,lVar8);
        lVar8 = *plVar10;
      }
      if ((param_3 != 0) && (lVar8 != 0)) {
        System_Runtime_Serialization_Formatters_Binary_BinaryArray__Set
                  (lVar8,*(undefined4 *)(param_3 + 0x18),1,lVar5,lVar6,uVar3,0,uVar4,0);
        if (*plVar10 != 0) {
          System_Runtime_Serialization_Formatters_Binary_BinaryArray__Write(*plVar10,param_1);
          uVar4 = *(undefined4 *)(param_5 + 0x28);
          if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray
                            (uVar4);
          uVar2 = DAT_0917fcc8;
          uVar11 = DAT_0917fc88;
          if ((param_7 == 0) && ((uVar7 & 1) != 0)) {
            iVar1 = *(int *)(param_5 + 0x28);
            if (iVar1 == 3) {
              if (param_8 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_03f99350(param_8,DAT_0917fcc8);
                uVar11 = uVar2;
                if (lVar5 == 0) goto LAB_074be6c4;
              }
              plVar10 = *(long **)(param_1 + 0x30);
              if (plVar10 == (long *)0x0) goto LAB_074be754;
              pcVar9 = *(code **)(*plVar10 + 0x238);
              uVar11 = *(undefined8 *)(*plVar10 + 0x240);
            }
            else {
              if (iVar1 != 2) {
                if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = System_Runtime_Serialization_Formatters_Binary_Converter__TypeLength(iVar1);
                System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteArrayAsBytes
                          (param_1,param_8,uVar4);
                return;
              }
              if (param_8 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_03f99350(param_8,DAT_0917fc88);
                if (lVar5 == 0) {
LAB_074be6c4:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(param_8,uVar11);
                }
              }
              plVar10 = *(long **)(param_1 + 0x30);
              if (plVar10 == (long *)0x0) goto LAB_074be754;
              pcVar9 = *(code **)(*plVar10 + 0x208);
              uVar11 = *(undefined8 *)(*plVar10 + 0x210);
            }
            (*pcVar9)(plVar10,lVar5,uVar11);
          }
          return;
        }
      }
    }
  }
LAB_074be754:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

