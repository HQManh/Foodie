// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseObjectEnd
// address: 0x74c2238
// body: available
// range: 0x74c2238-0x74c2467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c2378 to 0x74c3c48 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$RegisterObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c2454 to 0x74c1998 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$set_TopObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c2458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c245c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c2464 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObjectEnd
               (long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0952149b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09188e88);
    FUN_03f5c2a4(&DAT_0918cad0);
    DAT_0952149b = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar1 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                               (*(long *)(param_1 + 0x88),0);
    if (plVar1 == (long *)0x0) {
      plVar1 = param_2;
      if (param_2 == (long *)0x0) goto LAB_074c2458;
    }
    else if (*plVar1 != DAT_09188e88) goto LAB_074c245c;
    if (*(int *)((long)plVar1 + 0x24) == 1) {
      lVar4 = plVar1[9];
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar4 == *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38)) {
        plVar2 = plVar1 + 0x1d;
        *plVar2 = plVar1[6];
        thunk_FUN_03f5d7b8(plVar2);
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,*plVar2);
        return;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      System_Runtime_Serialization_Formatters_Binary_SerStack__Pop(*(long *)(param_1 + 0x88),0);
      if (*(long *)(param_1 + 0x88) != 0) {
        plVar2 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                                   (*(long *)(param_1 + 0x88),0);
        if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09188e88)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
        lVar4 = plVar1[0x1d];
        if (lVar4 == 0) {
          return;
        }
        if (*(int *)((long)plVar1 + 0x14) == 2) {
          if (*(int *)((long)plVar1 + 0x24) == 1) {
            System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1);
            lVar4 = plVar1[0x1d];
          }
          System_Runtime_Serialization_Formatters_Binary_ObjectReader__RegisterObject
                    (param_1,lVar4,plVar1,plVar2,0);
          return;
        }
        if (plVar1[0x1b] != 0) {
          System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__PopulateObjectMembers
                    (plVar1[0x1b],lVar4,plVar1[0x21]);
          if (((char)plVar1[0x20] == '\0') && (0 < plVar1[0xb])) {
            System_Runtime_Serialization_Formatters_Binary_ObjectReader__RegisterObject
                      (param_1,plVar1[0x1d],plVar1,plVar2,0);
          }
          if ((char)plVar1[0x1c] != '\0') {
            lVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__get_ValueFixupStack
                              (param_1);
            if ((lVar4 == 0) ||
               (plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Pop
                                           (lVar4,0), plVar3 == (long *)0x0)) goto LAB_074c2458;
            if (*plVar3 != DAT_0918cad0) {
LAB_074c245c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0();
            }
            System_Runtime_Serialization_Formatters_Binary_ValueFixup__Fixup(plVar3,plVar1,plVar2,0)
            ;
          }
          if (*(int *)((long)plVar1 + 0x24) == 1) {
            System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject
                      (param_1,plVar1[0x1d]);
          }
          if (plVar1[0x1b] != 0) {
            return;
          }
        }
      }
    }
  }
LAB_074c2458:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

