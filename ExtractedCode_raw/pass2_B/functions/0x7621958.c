// rea decompile_all
// name: System.Threading.ExecutionContext$$OnAsyncLocalContextChanged
// address: 0x7621958
// body: available
// range: 0x7621958-0x7621ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7621c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7621c98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7621ca0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07621c9c) */

void System_Threading_ExecutionContext__OnAsyncLocalContextChanged(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long *local_a8;
  undefined4 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long *local_60;
  
  if ((DAT_0952213e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cdb8);
    FUN_03f5c2a4(&DAT_091a2e40);
    FUN_03f5c2a4(&DAT_091a2e48);
    FUN_03f5c2a4(&DAT_091a2e50);
    FUN_03f5c2a4(&DAT_091853f0);
    FUN_03f5c2a4(&DAT_091ad058);
    DAT_0952213e = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 != 0) {
      FUN_057e185c(&local_b8,lVar8,DAT_091ad058);
      puStack_68 = puStack_b0;
      local_70 = local_b8;
      puStack_b0 = &local_70;
      local_60 = local_a8;
      local_b8 = 0;
      while (uVar2 = FUN_071bd28c(&local_70,DAT_091a2e48), plVar1 = local_60, (uVar2 & 1) != 0) {
        local_78 = 0;
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_06fd9fbc(*(long *)(param_1 + 0x38),local_60,&local_78,DAT_0919cdb8);
        }
        local_80 = 0;
        if ((param_2 != 0) && (*(long *)(param_2 + 0x38) != 0)) {
          FUN_06fd9fbc(*(long *)(param_2 + 0x38),plVar1,&local_80,DAT_0919cdb8);
        }
        lVar6 = local_78;
        lVar4 = local_80;
        if (local_78 != local_80) {
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar1;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091853f0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07621af4;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091853f0,0);
LAB_07621af4:
          (*(code *)*puVar3)(plVar1,lVar6,lVar4,1,puVar3[1]);
        }
      }
      FUN_071bd288(&local_70,DAT_091a2e40);
    }
  }
  if (((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x40), lVar4 != 0)) && (lVar4 != lVar8)) {
    FUN_057e185c(&local_b8,lVar4,DAT_091ad058);
    puStack_68 = puStack_b0;
    local_70 = local_b8;
    puStack_b0 = &local_70;
    local_60 = local_a8;
    local_b8 = 0;
    while (uVar2 = FUN_071bd28c(&local_70,DAT_091a2e48), plVar1 = local_60, (uVar2 & 1) != 0) {
      local_88 = 0;
      if (((param_1 == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
         (uVar2 = FUN_06fd9fbc(*(long *)(param_1 + 0x38),local_60,&local_88,DAT_0919cdb8),
         (uVar2 & 1) == 0)) {
        local_90 = 0;
        if (*(long *)(param_2 + 0x38) != 0) {
          FUN_06fd9fbc(*(long *)(param_2 + 0x38),plVar1,&local_90,DAT_0919cdb8);
        }
        lVar4 = local_88;
        lVar8 = local_90;
        if (local_88 != local_90) {
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar1;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091853f0) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07621c40;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091853f0,0);
LAB_07621c40:
          (*(code *)*puVar3)(plVar1,lVar4,lVar8,1,puVar3[1]);
        }
      }
    }
    FUN_071bd288(&local_70,DAT_091a2e40);
  }
  return;
}

