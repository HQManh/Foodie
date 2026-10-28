// rea decompile_all
// name: System.IO.BinaryReader$$ReadString
// address: 0x7583518
// body: available
// range: 0x7583518-0x75837cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75836b0 to 0x7440700 System.Text.StringBuilderCache$$GetStringAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7583710 to 0x743662c System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7583714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758371c to 0x7582080 System.IO.__Error$$FileNotOpen (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75837c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_BinaryReader__ReadString(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint local_54;
  
  if ((DAT_09521af8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09521af8 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = System_IO_BinaryReader__Read7BitEncodedInt(param_1);
    if ((int)uVar2 < 0) {
      uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar6 = FUN_03f5c394(uVar6,1);
      local_54 = uVar2;
      uVar8 = FUN_03f5c42c(DAT_09535420,&local_54);
      FUN_039b1d98(uVar6);
      FUN_039b0da0(uVar6,uVar8);
      FUN_039af17c(uVar6,0,uVar8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091fcb18);
      uVar6 = System_Environment__GetResourceString(uVar8,uVar6,0);
      thunk_FUN_03fc39d4(&DAT_09186188);
      uVar8 = thunk_FUN_03f9944c();
      System_IO_IOException___ctor(uVar8,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091c3de8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar6);
    }
    if (uVar2 == 0) {
      return **(undefined8 **)(DAT_09535468 + 0xb8);
    }
    plVar9 = (long *)(param_1 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_03f5c394(DAT_0917fc88,0x80);
      *plVar9 = lVar5;
      thunk_FUN_03f5d7b8(plVar9,lVar5);
    }
    plVar10 = (long *)(param_1 + 0x38);
    if (*plVar10 == 0) {
      uVar6 = FUN_03f5c394(DAT_0917fcc8,*(undefined4 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      thunk_FUN_03f5d7b8(plVar10,uVar6);
    }
    lVar5 = 0;
    iVar11 = 0;
    while( true ) {
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_07583714;
      iVar1 = uVar2 - iVar11;
      if (0x7f < iVar1) {
        iVar1 = 0x80;
      }
      uVar3 = (**(code **)(*plVar7 + 0x368))
                        (plVar7,*plVar9,0,iVar1,*(undefined8 *)(*plVar7 + 0x370));
      if (uVar3 == 0) break;
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) {
LAB_07583714:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (**(code **)(*plVar7 + 0x1b8))
                        (plVar7,*plVar9,0,uVar3,*plVar10,0,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((iVar11 == 0) && (uVar3 == uVar2)) {
        uVar6 = System_String__CreateString(0,*plVar10,0,uVar4,0);
        return uVar6;
      }
      if ((lVar5 == 0) && (lVar5 = System_Text_StringBuilderCache__Acquire(uVar2,0), lVar5 == 0))
      goto LAB_07583714;
      System_Text_StringBuilder__Append(lVar5,*plVar10,0,uVar4,0);
      iVar11 = uVar3 + iVar11;
      if ((int)uVar2 <= iVar11) {
        uVar6 = System_Text_StringBuilderCache__GetStringAndRelease(lVar5,0);
        return uVar6;
      }
    }
    System_IO___Error__EndOfFile();
  }
                    /* WARNING: Subroutine does not return */
  System_IO___Error__FileNotOpen();
}

