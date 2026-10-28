// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteRectangleArray
// address: 0x74bea60
// body: available
// range: 0x74bea60-0x74bebdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bebd4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bebd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteRectangleArray
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               int param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0952147a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181be0);
    DAT_0952147a = 1;
  }
  System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull(param_1);
  if (param_5 != 0) {
    uVar7 = *(undefined8 *)(param_5 + 0x30);
    System_Runtime_Serialization_Formatters_Binary_NameInfo__get_NIname(param_5,0);
    uVar3 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetBinaryTypeInfo
                      (uVar7,param_4);
    plVar6 = (long *)(param_1 + 0x70);
    if (*plVar6 == 0) {
      lVar4 = thunk_FUN_03f9944c(DAT_09181be0);
      System_Object___ctor(lVar4,0);
      *plVar6 = lVar4;
      thunk_FUN_03f5d7b8(plVar6,lVar4);
    }
    if (0 < param_6) {
      if (param_8 == 0) goto LAB_074bebd8;
      iVar1 = *(int *)(param_8 + 0x18);
      piVar5 = (int *)(param_8 + 0x20);
      iVar2 = param_6;
      do {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*piVar5 != 0) {
          uVar7 = 5;
          if (param_3 == 0) goto LAB_074bebd8;
          goto LAB_074beb7c;
        }
        iVar2 = iVar2 + -1;
        piVar5 = piVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar2 != 0);
    }
    uVar7 = 2;
    if (param_3 != 0) {
LAB_074beb7c:
      if (*plVar6 != 0) {
        System_Runtime_Serialization_Formatters_Binary_BinaryArray__Set
                  (*plVar6,*(undefined4 *)(param_3 + 0x18),param_6,param_7,param_8,uVar3,0,uVar7,0);
        if (*plVar6 != 0) {
          System_Runtime_Serialization_Formatters_Binary_BinaryArray__Write(*plVar6,param_1);
          return;
        }
      }
    }
  }
LAB_074bebd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

