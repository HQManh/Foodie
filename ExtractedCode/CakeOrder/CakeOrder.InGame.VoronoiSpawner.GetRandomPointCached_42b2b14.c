// rea decompile_all
// name: CakeOrder.InGame.VoronoiSpawner$$GetRandomPointCached
// address: 0x42b2b14
// body: available
// range: 0x42b2b14-0x42b2d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b2d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_VoronoiSpawner__GetRandomPointCached(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  double dVar5;
  undefined1 local_60 [24];
  long local_48;
  
  if ((DAT_095172b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e308);
    FUN_03f5c2a4(&DAT_091affa8);
    FUN_03f5c2a4(&DAT_091b4188);
    FUN_03f5c2a4(&DAT_091b4190);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095172b8 = 1;
  }
  local_48 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_06ef1fe8(*(long *)(param_1 + 0x20),param_2,&local_48,DAT_0919e308);
    if ((uVar2 & 1) == 0) {
LAB_042b2cbc:
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      return;
    }
    if ((local_48 != 0) && (*(long *)(local_48 + 0x10) != 0)) {
      if (*(int *)(*(long *)(local_48 + 0x10) + 0x18) == 0) goto LAB_042b2cbc;
      plVar4 = *(long **)(param_1 + 0x10);
      if ((((plVar4 != (long *)0x0) &&
           (dVar5 = (double)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)),
           local_48 != 0)) && (*(long *)(local_48 + 0x18) != 0)) &&
         ((uVar1 = FUN_05863930(*(float *)(local_48 + 0x20) * (float)dVar5,
                                *(long *)(local_48 + 0x18),DAT_091affa8), local_48 != 0 &&
          (lVar3 = *(long *)(local_48 + 0x10), lVar3 != 0)))) {
        uVar1 = uVar1 ^ (int)uVar1 >> 0x1f;
        if (*(int *)(lVar3 + 0x18) <= (int)uVar1) {
          uVar1 = *(int *)(lVar3 + 0x18) - 1;
        }
        FUN_059e8d7c(local_60,lVar3,uVar1,DAT_091b4190);
        (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

