// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$Finish
// address: 0x41e83a4
// body: available
// range: 0x41e83a4-0x41e865f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e865c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__Finish
               (undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_48;
  undefined8 local_38;
  
  if ((DAT_09516ba1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ca70);
    FUN_03f5c2a4(&DAT_0919ca78);
    FUN_03f5c2a4(&DAT_0919ea28);
    FUN_03f5c2a4(&DAT_0919ea38);
    FUN_03f5c2a4(&DAT_091b3630);
    FUN_03f5c2a4(&DAT_091b3628);
    FUN_03f5c2a4(&DAT_0917d648);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_09516ba1 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09189140 + 0xb8) != 0) {
    uVar2 = FUN_06fd9fbc(**(long **)(DAT_09189140 + 0xb8),param_1,&local_38,DAT_0919ca78);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09189140 + 0xb8) != 0) {
      FUN_06fd9970(**(long **)(DAT_09189140 + 0xb8),param_1,DAT_0919ca70);
      AnhPD_FoodOrder_PieceLedger__Close(local_38,param_2,param_3);
      if ((param_2 != 1) || (param_4 == 0)) {
        if (param_2 != 4) {
          return;
        }
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x90) =
             *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x90) + 1;
        return;
      }
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x28);
      if (lVar3 != 0) {
        uVar2 = FUN_06fd9fbc(lVar3,param_4,&local_48,DAT_0919ea28);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x28);
          lVar3 = thunk_FUN_03f9944c(DAT_0917d648);
          FUN_057e0400(lVar3,DAT_091b3628);
          local_48 = lVar3;
          if (lVar5 == 0) goto LAB_041e865c;
          FUN_06fd8440(lVar5,param_4,lVar3,DAT_0919ea38);
        }
        lVar3 = DAT_091b3630;
        if (local_48 != 0) {
          lVar5 = *(long *)(local_48 + 0x10);
          *(int *)(local_48 + 0x1c) = *(int *)(local_48 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(local_48 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(local_48 + 0x18) = uVar1 + 1;
              puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *puVar4 = local_38;
              thunk_FUN_03f5d7b8(puVar4);
              return;
            }
            FUN_057e0c68(local_48,local_38,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_041e865c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

