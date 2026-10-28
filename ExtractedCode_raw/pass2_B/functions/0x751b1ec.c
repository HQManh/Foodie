// rea decompile_all
// name: System.AggregateException$$get_Message
// address: 0x751b1ec
// body: available
// range: 0x751b1ec-0x751b377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751b320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751b358 to 0x7440700 System.Text.StringBuilderCache$$GetStringAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x751b374 to 0x75eeda0 System.Exception$$get_Message (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_AggregateException__get_Message(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09521746 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9520);
    FUN_03f5c2a4(&DAT_091b9528);
    FUN_03f5c2a4(&DAT_091f83f8);
    DAT_09521746 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    iVar1 = FUN_05f077b8(*(long *)(param_1 + 0x90),DAT_091b9520);
    if (iVar1 == 0) {
      System_Exception__get_Message(param_1,0);
      return;
    }
    lVar3 = System_Text_StringBuilderCache__Acquire(0x10,0);
    uVar4 = System_Exception__get_Message(param_1,0);
    if (lVar3 != 0) {
      System_Text_StringBuilder__Append(lVar3,uVar4,0);
      System_Text_StringBuilder__Append(lVar3,0x20,0);
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 != 0) {
        iVar1 = 0;
        do {
          iVar2 = FUN_05f077b8(lVar5,DAT_091b9520);
          if (iVar2 <= iVar1) {
            iVar1 = System_Text_StringBuilder__get_Length(lVar3,0);
            System_Text_StringBuilder__set_Length(lVar3,iVar1 + -1,0);
            System_Text_StringBuilderCache__GetStringAndRelease(lVar3,0);
            return;
          }
          System_Text_StringBuilder__Append(lVar3,0x28,0);
          if ((*(long *)(param_1 + 0x90) == 0) ||
             (plVar6 = (long *)FUN_05f07844(*(long *)(param_1 + 0x90),iVar1,DAT_091b9528),
             plVar6 == (long *)0x0)) break;
          uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
          System_Text_StringBuilder__Append(lVar3,uVar4,0);
          System_Text_StringBuilder__Append(lVar3,DAT_091f83f8,0);
          lVar5 = *(long *)(param_1 + 0x90);
          iVar1 = iVar1 + 1;
        } while (lVar5 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

