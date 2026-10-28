// rea decompile_all
// name: System.IO.StreamReader$$ReadBuffer
// address: 0x756c664
// body: available
// range: 0x756c664-0x756c7c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756c7c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_IO_StreamReader__ReadBuffer(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x55) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  do {
    plVar3 = *(long **)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x30);
    if (cVar6 == '\0') {
      if ((lVar5 == 0) || (plVar3 == (long *)0x0)) goto LAB_0756c7c4;
      iVar2 = (**(code **)(*plVar3 + 0x368))
                        (plVar3,lVar5,0,*(undefined4 *)(lVar5 + 0x18),
                         *(undefined8 *)(*plVar3 + 0x370));
      *(int *)(param_1 + 0x48) = iVar2;
      if (iVar2 == 0) {
LAB_0756c7b4:
        return *(int *)(param_1 + 0x44);
      }
    }
    else {
      if ((lVar5 == 0) || (plVar3 == (long *)0x0)) goto LAB_0756c7c4;
      iVar1 = (**(code **)(*plVar3 + 0x368))();
      iVar2 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        if (iVar2 < 1) goto LAB_0756c7b4;
        plVar3 = *(long **)(param_1 + 0x28);
        if (plVar3 != (long *)0x0) {
          iVar1 = *(int *)(param_1 + 0x44);
          iVar2 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(param_1 + 0x30),0,iVar2,
                             *(undefined8 *)(param_1 + 0x38),iVar1,*(undefined8 *)(*plVar3 + 0x1c0))
          ;
          iVar2 = iVar2 + iVar1;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(int *)(param_1 + 0x44) = iVar2;
          return iVar2;
        }
        goto LAB_0756c7c4;
      }
      iVar2 = iVar2 + iVar1;
      *(int *)(param_1 + 0x48) = iVar2;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_0756c7c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(bool *)(param_1 + 0x56) = iVar2 < *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    uVar4 = System_IO_StreamReader__IsPreamble(param_1);
    if ((uVar4 & 1) == 0) {
      if ((*(char *)(param_1 + 0x54) != '\0') && (1 < *(int *)(param_1 + 0x48))) {
        System_IO_StreamReader__DetectEncoding(param_1);
      }
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 == (long *)0x0) goto LAB_0756c7c4;
      iVar1 = *(int *)(param_1 + 0x44);
      iVar2 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x38),iVar1,*(undefined8 *)(*plVar3 + 0x1c0));
      iVar2 = iVar2 + iVar1;
      *(int *)(param_1 + 0x44) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    cVar6 = *(char *)(param_1 + 0x55);
  } while( true );
}

