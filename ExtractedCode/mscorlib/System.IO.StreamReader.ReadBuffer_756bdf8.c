// rea decompile_all
// name: System.IO.StreamReader$$ReadBuffer
// address: 0x756bdf8
// body: available
// range: 0x756bdf8-0x756c0b7 inclusive
// range: 0x756c0bc-0x756c107 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756bf74 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bfb8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756c068 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756c0b4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756c104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0756bf18) */

ulong System_IO_StreamReader__ReadBuffer(long param_1,undefined8 param_2,int param_3,char *param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_09521a19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9758);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521a19 = 1;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x55) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *param_4 = *(int *)(param_1 + 0x50) <= param_3;
  do {
    do {
      plVar2 = *(long **)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x55) == '\0') {
        if ((lVar4 == 0) || (plVar2 == (long *)0x0)) goto LAB_0756c104;
        uVar3 = (**(code **)(*plVar2 + 0x368))
                          (plVar2,lVar4,0,*(undefined4 *)(lVar4 + 0x18),
                           *(undefined8 *)(*plVar2 + 0x370));
        *(int *)(param_1 + 0x48) = (int)uVar3;
        if ((int)uVar3 == 0) goto LAB_0756c010;
      }
      else {
        if ((lVar4 == 0) || (plVar2 == (long *)0x0)) goto LAB_0756c104;
        iVar1 = (**(code **)(*plVar2 + 0x368))();
        uVar5 = *(uint *)(param_1 + 0x48);
        if (iVar1 == 0) {
          if ((int)uVar5 < 1) {
            return 0;
          }
          plVar2 = *(long **)(param_1 + 0x28);
          if (*param_4 == '\0') {
            if (plVar2 != (long *)0x0) {
              uVar3 = (**(code **)(*plVar2 + 0x1b8))
                                (plVar2,*(undefined8 *)(param_1 + 0x30),0,uVar5,
                                 *(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(*plVar2 + 0x1c0))
              ;
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)uVar3;
              return uVar3;
            }
          }
          else {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            if (*(uint *)(lVar4 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            if (plVar2 != (long *)0x0) {
              uVar3 = (**(code **)(*plVar2 + 0x1e8))
                                (plVar2,lVar4 + 0x20,uVar5,param_2,param_3,0,
                                 *(undefined8 *)(*plVar2 + 0x1f0));
              *(undefined4 *)(param_1 + 0x44) = 0;
              return uVar3;
            }
          }
          goto LAB_0756c104;
        }
        uVar3 = (ulong)(uVar5 + iVar1);
        *(uint *)(param_1 + 0x48) = uVar5 + iVar1;
      }
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_0756c104:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(bool *)(param_1 + 0x56) = (int)uVar3 < *(int *)(*(long *)(param_1 + 0x30) + 0x18);
      uVar3 = System_IO_StreamReader__IsPreamble(param_1);
    } while ((uVar3 & 1) != 0);
    if ((*(char *)(param_1 + 0x54) != '\0') && (1 < *(int *)(param_1 + 0x48))) {
      System_IO_StreamReader__DetectEncoding(param_1);
      *param_4 = *(int *)(param_1 + 0x50) <= param_3;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    plVar2 = *(long **)(param_1 + 0x28);
    if (*param_4 == '\0') {
      if (plVar2 == (long *)0x0) goto LAB_0756c104;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(*plVar2 + 0x1c0));
      iVar1 = *(int *)(param_1 + 0x44) + (int)uVar3;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x48);
      if (lVar4 == 0) {
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar4 = 0;
        uVar5 = 0;
      }
      else {
        if (*(uint *)(lVar4 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar4 = lVar4 + 0x20;
      }
      if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (plVar2 == (long *)0x0) goto LAB_0756c104;
      uVar3 = (**(code **)(*plVar2 + 0x1e8))
                        (plVar2,lVar4,uVar5,param_2,param_3,0,*(undefined8 *)(*plVar2 + 0x1f0));
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x44) = iVar1;
  } while ((int)uVar3 == 0);
LAB_0756c010:
  *(bool *)(param_1 + 0x56) = (int)uVar3 < param_3 && *(char *)(param_1 + 0x56) != '\0';
  return uVar3;
}

