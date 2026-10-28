// rea decompile_all
// name: System.TermInfoDriver$$ReadKeyInternal
// address: 0x760a2d0
// body: available
// range: 0x760a2d0-0x760a48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760a488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a48c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_TermInfoDriver__ReadKeyInternal(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [12];
  undefined1 uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09522014 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_09182a40);
    DAT_09522014 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    System_TermInfoDriver__Init(param_1);
  }
  System_TermInfoDriver__InitKeys(param_1);
  plVar3 = (long *)System_TermInfoDriver__GetKeyFromBuffer(param_1,1);
  if (plVar3 == (long *)0x0) {
    uVar6 = 1;
    do {
      if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = thunk_FUN_03f8e428(0x96);
      if (iVar1 < 1) {
        if (*(long *)(param_1 + 0x60) == 0) {
LAB_0760a488:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = System_IO_StreamReader__DataAvailable(*(long *)(param_1 + 0x60),0);
        if ((uVar4 & 1) == 0) {
          plVar3 = (long *)System_TermInfoDriver__GetKeyFromBuffer(param_1,0);
          if (plVar3 != (long *)0x0) {
            uVar6 = 1;
            break;
          }
          plVar3 = *(long **)(param_1 + 0x60);
          if (plVar3 == (long *)0x0) goto LAB_0760a488;
          uVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          System_TermInfoDriver__AddToBuffer(param_1,uVar2);
        }
        else {
          do {
            plVar3 = *(long **)(param_1 + 0x60);
            if (plVar3 == (long *)0x0) goto LAB_0760a488;
            uVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
            System_TermInfoDriver__AddToBuffer(param_1,uVar2);
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_0760a488;
            uVar4 = System_IO_StreamReader__DataAvailable(*(long *)(param_1 + 0x60),0);
          } while ((uVar4 & 1) != 0);
        }
      }
      else {
        do {
          plVar3 = *(long **)(param_1 + 0x60);
          if (plVar3 == (long *)0x0) goto LAB_0760a488;
          uVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          System_TermInfoDriver__AddToBuffer(param_1,uVar2);
          if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = thunk_FUN_03f8e428(0);
        } while (0 < iVar1);
      }
      plVar3 = (long *)System_TermInfoDriver__GetKeyFromBuffer(param_1,1);
    } while (plVar3 == (long *)0x0);
  }
  else {
    uVar6 = 0;
  }
  *param_2 = uVar6;
  if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09182a40 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
  pauVar5 = (undefined1 (*) [12])thunk_FUN_03f99594();
  auVar7._12_4_ = 0;
  auVar7._0_12_ = *pauVar5;
  return auVar7;
}

