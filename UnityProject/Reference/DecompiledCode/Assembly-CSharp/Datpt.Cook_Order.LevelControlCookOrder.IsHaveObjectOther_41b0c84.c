// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$IsHaveObjectOther
// address: 0x41b0c84
// body: available
// range: 0x41b0c84-0x41b0e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b0e7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b0e80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Datpt_Cook_Order_LevelControlCookOrder__IsHaveObjectOther
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  if ((DAT_095168f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5590);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09189078);
    FUN_03f5c2a4(&DAT_0918cbd0);
    FUN_03f5c2a4(&DAT_092260b0);
    DAT_095168f0 = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0x140);
  if (*(int *)(DAT_09189078 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = UnityEngine_Physics2D__OverlapCircleNonAlloc(param_1,param_2,param_4,uVar4,0);
  if (iVar1 < 1) {
    return false;
  }
  lVar6 = 0;
  bVar5 = true;
  do {
    lVar3 = *(long *)(param_5 + 0x140);
    if (lVar3 == 0) goto LAB_041b0e7c;
    if (*(uint *)(lVar3 + 0x18) <= (uint)lVar6) {
LAB_041b0e80:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar3 = *(long *)(lVar3 + lVar6 * 8 + 0x20);
    if (lVar3 == 0) {
LAB_041b0e7c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_04a6a14c(lVar3,DAT_091c5590);
    *(undefined8 *)(param_5 + 0x138) = uVar4;
    thunk_FUN_03f5d7b8(param_5 + 0x138,uVar4);
    if ((*(long *)(param_5 + 0x138) != 0) && (*(long *)(param_5 + 0x138) != param_6)) {
      lVar3 = *(long *)(param_5 + 0x140);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= (uint)lVar6) goto LAB_041b0e80;
        lVar6 = *(long *)(lVar3 + lVar6 * 8 + 0x20);
        if (lVar6 != 0) {
          uVar4 = UnityEngine_Object__GetName(lVar6,0);
          local_6c = param_1;
          uStack_68 = param_2;
          local_64 = param_3;
          uVar2 = FUN_03f5c42c(DAT_0918cbd0,&local_6c);
          uVar4 = System_String__Format(DAT_092260b0,uVar4,uVar2,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar4,0);
          return bVar5;
        }
      }
      goto LAB_041b0e7c;
    }
    lVar6 = lVar6 + 1;
    bVar5 = (int)lVar6 < iVar1;
    if (iVar1 == (int)lVar6) {
      return bVar5;
    }
  } while( true );
}

