// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteArrayAsBytes
// address: 0x74be75c
// body: available
// range: 0x74be75c-0x74be8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74be8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteArrayAsBytes
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  if ((DAT_09521478 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521478 = 1;
  }
  System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull(param_1);
  plVar7 = (long *)(param_1 + 0x78);
  if (*plVar7 == 0) {
    uVar5 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    thunk_FUN_03f5d7b8(plVar7,uVar5);
  }
  if (param_2 != 0) {
    iVar2 = System_Array__get_Length(param_2,0);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x80);
        iVar3 = System_Array__get_Length(param_2,0);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = iVar4 / param_3;
        }
        iVar4 = System_Math__Min(iVar1,iVar3 - iVar2,0);
        thunk_FUN_03f6c31c(param_2,iVar2 * param_3,*(undefined8 *)(param_1 + 0x78),0,iVar4 * param_3
                           ,0);
        plVar6 = *(long **)(param_1 + 0x30);
        if (plVar6 == (long *)0x0) goto LAB_074be8b4;
        (**(code **)(*plVar6 + 0x218))
                  (plVar6,*plVar7,0,iVar4 * param_3,*(undefined8 *)(*plVar6 + 0x220));
        iVar2 = iVar4 + iVar2;
        iVar4 = System_Array__get_Length(param_2,0);
      } while (iVar2 < iVar4);
    }
    return;
  }
LAB_074be8b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

