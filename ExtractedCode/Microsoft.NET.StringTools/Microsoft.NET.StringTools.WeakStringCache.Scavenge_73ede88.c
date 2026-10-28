// rea decompile_all
// name: Microsoft.NET.StringTools.WeakStringCache$$Scavenge
// address: 0x73ede88
// body: available
// range: 0x73ede88-0x73ee0f7 inclusive
// range: 0x73ee0fc-0x73ee0ff inclusive
// range: 0x73ee104-0x73ee107 inclusive
// range: 0x73ee150-0x73ee16b inclusive
// range: 0x73ee1cc-0x73ee25f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ee0f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee15c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee164 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ee25c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ee160) */
/* WARNING: Removing unreachable block (ram,0x073ee25c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Microsoft_NET_StringTools_WeakStringCache__Scavenge(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  char local_64 [4];
  long local_60;
  long local_58;
  
  if ((DAT_09520dfc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b6d8);
    FUN_03f5c2a4(&DAT_0919b6e0);
    FUN_03f5c2a4(&DAT_0919b6f0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a8e8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a95a8);
    FUN_03f5c2a4(&DAT_091a95b0);
    DAT_09520dfc = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_64[0] = '\0';
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)FUN_06d64604(*(long *)(param_1 + 0x10),DAT_0919b6d8);
  do {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073edfc4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_073edfc4:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_073ee210;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a8e8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073ee028;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a8e8,0);
LAB_073ee028:
    auVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (auVar6._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__get_IsUsed(auVar6._8_8_);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06d63500(*(long *)(param_1 + 0x10),auVar6._0_8_ & 0xffffffff,&local_58,
                           DAT_0919b6f0);
      if ((uVar4 & 1) != 0) {
        local_64[0] = '\0';
        local_60 = local_58;
        System_Threading_Monitor__Enter(local_58,local_64,0);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__get_IsUsed();
        if ((uVar4 & 1) == 0) {
LAB_073ee0b0:
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Runtime_InteropServices_GCHandle__Free(local_58 + 0x10,0);
        }
        else {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = FUN_06d633e8(*(long *)(param_1 + 0x10),auVar6._0_8_ & 0xffffffff,local_58,
                               DAT_0919b6e0);
          if ((uVar4 & 1) == 0) goto LAB_073ee0b0;
        }
        if (local_64[0] != '\0') {
          System_Threading_Monitor__Exit(local_60,0);
        }
      }
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_073ee22c;
    }
  }
LAB_073ee210:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_073ee22c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}

