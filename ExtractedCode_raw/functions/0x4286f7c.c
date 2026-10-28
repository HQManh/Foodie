// rea decompile_all
// name: CakeOrder.InGame.LevelSaveMeControl$$CountHardCurrencySaveMeInLevel
// address: 0x4286f7c
// body: available
// range: 0x4286f7c-0x4287293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4287278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428727c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4287280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4287284 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4287288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4287290 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0428728c) */

int CakeOrder_InGame_LevelSaveMeControl__CountHardCurrencySaveMeInLevel(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long local_88 [2];
  undefined4 local_78;
  undefined8 local_70;
  long **pplStack_68;
  long **local_60;
  long *local_58;
  int local_4c;
  long *local_48;
  
  if ((DAT_09517146 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09172b88);
    FUN_03f5c2a4(&DAT_0918a5c0);
    DAT_09517146 = 1;
  }
  uVar1 = DAT_09172b88;
  local_48 = (long *)0x0;
  local_4c = 0;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) {
      return 0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    lVar2 = System_Enum__GetValues(uVar1,0);
    if (lVar2 != 0) {
      local_48 = (long *)System_Array__GetEnumerator(lVar2,0);
      pplStack_68 = &local_48;
      local_70 = 0;
      local_60 = &local_58;
      iVar9 = 0;
      do {
        plVar4 = local_48;
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *local_48;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_042870f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_042870f8:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        plVar4 = local_48;
        if ((uVar7 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_03f99350(local_48,DAT_09185a58);
          if (plVar4 == (long *)0x0) {
            return iVar9;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          local_58 = plVar4;
          if (uVar7 == 0) goto LAB_04287230;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_04287218;
        }
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *local_48;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_04287160;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,1);
LAB_04287160:
        plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_0918a5c0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        puVar5 = (undefined4 *)thunk_FUN_03f99594();
        local_88[0] = DAT_0918a5c0;
        local_78 = *puVar5;
        local_88[1] = 0xffffffffffffffff;
        uVar1 = System_Enum__ToString(local_88,0);
        uVar7 = FUN_06fcbf70(lVar6,uVar1,&local_4c,DAT_0919f9c8);
        if ((uVar7 & 1) != 0) {
          iVar9 = local_4c + iVar9;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04287218:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0428724c;
    }
  }
LAB_04287230:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0428724c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return iVar9;
}

