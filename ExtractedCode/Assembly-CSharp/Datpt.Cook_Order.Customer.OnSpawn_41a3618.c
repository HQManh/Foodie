// rea decompile_all
// name: Datpt.Cook_Order.Customer$$OnSpawn
// address: 0x41a3618
// body: available
// range: 0x41a3618-0x41a37bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a379c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a37b8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a37bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Customer__OnSpawn(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0951685c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6e98);
    FUN_03f5c2a4(&DAT_091c6ea8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951685c = 1;
  }
  Datpt_Cook_Order_PoolingObject__OnSpawn(param_1);
  if (*(char *)(param_1 + 100) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar3,param_1,DAT_091c6e98,0);
      if (lVar4 == 0) goto LAB_041a37bc;
      Datpt_Cook_Order_SpriteCountdownTimer__add_OnTimeOut(lVar4,uVar3,0);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 0x68) + 0x40);
        lVar4 = *plVar5;
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_1,DAT_091c6ea8,0);
        plVar2 = (long *)System_Delegate__Combine(lVar4,uVar3,0);
        lVar4 = DAT_09180e78;
        if (plVar2 == (long *)0x0) {
          *plVar5 = 0;
        }
        else if ((*plVar2 != DAT_09180e78) || (*plVar5 = (long)plVar2, *plVar2 != lVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
        thunk_FUN_03f5d7b8(plVar5,plVar2);
        return;
      }
LAB_041a37bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

