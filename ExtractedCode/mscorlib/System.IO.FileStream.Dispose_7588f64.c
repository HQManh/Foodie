// rea decompile_all
// name: System.IO.FileStream$$Dispose
// address: 0x7588f64
// body: available
// range: 0x7588f64-0x758920b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75891ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75891b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7589200 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7589208 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07589190) */
/* WARNING: Removing unreachable block (ram,0x07589194) */
/* WARNING: Removing unreachable block (ram,0x07589198) */
/* WARNING: Removing unreachable block (ram,0x07589204) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_IO_FileStream__Dispose(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  char local_44 [4];
  long local_40;
  int local_34;
  
  if ((DAT_09521b1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09184a48);
    FUN_03f5c2a4(&DAT_09188380);
    DAT_09521b1a = 1;
  }
  local_34 = 0;
  local_40 = 0;
  local_44[0] = '\0';
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(*(long *)(param_1 + 0x38),0),
      (uVar2 & 1) != 0)) ||
     (System_IO_FileStream__FlushBuffer(param_1), *(char *)(param_1 + 0x54) == '\0')) {
LAB_07589040:
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((param_2 & 1) != 0) {
      plVar5 = (long *)(param_1 + 0x28);
      if (*plVar5 != 0) {
        if (*(int *)(*plVar5 + 0x18) == 0x1000) {
          if (*(int *)(DAT_09184580 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = *(long **)(DAT_09184580 + 0xb8);
          if (*plVar4 == 0) {
            if (*(int *)(DAT_09184580 + 0xe4) == 0) {
              FUN_03f5c424();
              plVar4 = *(long **)(DAT_09184580 + 0xb8);
            }
            local_40 = plVar4[1];
            local_44[0] = '\0';
            System_Threading_Monitor__Enter(local_40,local_44,0);
            if (*(int *)(DAT_09184580 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = *(long **)(DAT_09184580 + 0xb8);
            if (*plVar4 == 0) {
              lVar7 = *plVar5;
              if (*(int *)(DAT_09184580 + 0xe4) == 0) {
                FUN_03f5c424();
                plVar4 = *(long **)(DAT_09184580 + 0xb8);
              }
              *plVar4 = lVar7;
              thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184580 + 0xb8),lVar7);
            }
            if (local_44[0] != '\0') {
              System_Threading_Monitor__Exit(local_40,0);
            }
          }
        }
        *plVar5 = 0;
        thunk_FUN_03f5d7b8(plVar5,0);
        if (*(int *)(DAT_09184a48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_GC__SuppressFinalize(param_1,0);
      }
    }
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    if (*(int *)(DAT_09188380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f8d6ac(uVar6,&local_34,0);
    if (local_34 != 0) {
      uVar6 = System_IO_FileStream__GetSecureFileName(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar1 = local_34;
      thunk_FUN_03fc39d4(&DAT_09188380);
      FUN_039afb80();
      uVar6 = System_IO_MonoIO__GetException(uVar6,iVar1,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091cc260);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar3);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      System_Runtime_InteropServices_SafeHandle__DangerousRelease(*(long *)(param_1 + 0x38),0);
      goto LAB_07589040;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

