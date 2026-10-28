// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$DebugLastBatch
// address: 0x40e8098
// body: available
// range: 0x40e8098-0x40e828b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e823c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ConveyorPickup__DebugLastBatch(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_44;
  
  if ((DAT_09516094 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192398);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b32c0);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b32c8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f86e8);
    DAT_09516094 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar1) {
        if (plVar2 != (long *)0x0) {
          iVar1 = System_Text_StringBuilder__get_Length(plVar2,0);
          uVar4 = DAT_091f8a38;
          if (iVar1 != 0) {
            uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          }
          return uVar4;
        }
        break;
      }
      if (iVar1 == 0) {
        uVar4 = FUN_057e0998(lVar3,0,DAT_091b0610);
        if (plVar2 == (long *)0x0) break;
      }
      else {
        if (plVar2 == (long *)0x0) break;
        System_Text_StringBuilder__Append(plVar2,DAT_091f86e8,0);
        if (*(long *)(param_1 + 0x40) == 0) break;
        uVar4 = FUN_057e0998(*(long *)(param_1 + 0x40),iVar1,DAT_091b0610);
      }
      System_Text_StringBuilder__Append(plVar2,uVar4,0);
      if (*(long *)(param_1 + 0x48) == 0) break;
      if (iVar1 < *(int *)(*(long *)(param_1 + 0x48) + 0x18)) {
        lVar3 = System_Text_StringBuilder__Append(plVar2,0x2192,0);
        if (*(long *)(param_1 + 0x48) == 0) break;
        local_44 = FUN_0595bd8c(*(long *)(param_1 + 0x48),iVar1,DAT_091b32c8);
        uVar4 = FUN_03f5c42c(DAT_09192398,&local_44);
        if (lVar3 == 0) break;
        System_Text_StringBuilder__Append(lVar3,uVar4,0);
      }
      lVar3 = *(long *)(param_1 + 0x40);
      iVar1 = iVar1 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

