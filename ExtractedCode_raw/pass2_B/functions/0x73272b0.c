// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager$$SetRuntimeStringOverrides
// address: 0x73272b0
// body: available
// range: 0x73272b0-0x732755f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732754c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7327550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7327554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732755c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07327558) */

void IapAdsSystem_RemoteConfigManager__SetRuntimeStringOverrides(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_095205df & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ff00);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2d0);
    FUN_03f5c2a4(&DAT_0917a948);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    DAT_095205df = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a2d0) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07327390;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a2d0,0);
LAB_07327390:
  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0732741c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0732741c:
    uVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_07327508;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a948) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07327480;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a948,0);
LAB_07327480:
    auVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    lVar3 = auVar6._8_8_;
    if (lVar3 == 0) {
      lVar3 = **(long **)(DAT_09535468 + 0xb8);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8440(*(long *)(param_1 + 0x38),auVar6._0_8_,lVar3,DAT_0919ff00);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_07327524;
    }
  }
LAB_07327508:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07327524:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}

