// rea decompile_all
// name: System.IO.FileStream$$InitBuffer
// address: 0x7586d74
// body: available
// range: 0x7586d74-0x7586feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7586fe0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7586fe8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07586f30) */
/* WARNING: Removing unreachable block (ram,0x07586fe4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_IO_FileStream__InitBuffer(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char local_3c [4];
  long local_38;
  
  if ((DAT_09521b1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521b1e = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  if ((param_3 & 1) == 0) {
    if (param_2 < 1) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_092185f0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
      System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091cc298);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_Math__Max(param_2,8,0);
    if (iVar1 < 0x1001) {
      if (*(int *)(DAT_09184580 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = *(long **)(DAT_09184580 + 0xb8);
      if (*plVar6 != 0) {
        if (*(int *)(DAT_09184580 + 0xe4) == 0) {
          FUN_03f5c424();
          plVar6 = *(long **)(DAT_09184580 + 0xb8);
        }
        local_38 = plVar6[1];
        local_3c[0] = '\0';
        System_Threading_Monitor__Enter(local_38,local_3c,0);
        if (*(int *)(DAT_09184580 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = **(long **)(DAT_09184580 + 0xb8);
        if (lVar5 != 0) {
          if (*(int *)(DAT_09184580 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = **(long **)(DAT_09184580 + 0xb8);
          }
          *(long *)(param_1 + 0x28) = lVar5;
          thunk_FUN_03f5d7b8();
          **(undefined8 **)(DAT_09184580 + 0xb8) = 0;
          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184580 + 0xb8),0);
        }
        if (local_3c[0] != '\0') {
          System_Threading_Monitor__Exit(local_38,0);
        }
      }
    }
    plVar6 = (long *)(param_1 + 0x28);
    if (*plVar6 == 0) {
      lVar5 = FUN_03f5c394(DAT_0917fc88,iVar1);
      *plVar6 = lVar5;
      thunk_FUN_03f5d7b8(plVar6,lVar5);
    }
    else {
      System_Array__Clear(*plVar6,0,iVar1,0);
    }
  }
  else {
    uVar2 = FUN_03f5c394(DAT_0917fc88,1);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8();
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x5c) = iVar1;
  return;
}

