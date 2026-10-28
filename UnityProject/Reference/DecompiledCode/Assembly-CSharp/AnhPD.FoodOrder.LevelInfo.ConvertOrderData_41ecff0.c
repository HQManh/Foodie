// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$ConvertOrderData
// address: 0x41ecff0
// body: available
// range: 0x41ecff0-0x41ed1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ed1e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ed1e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__ConvertOrderData(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__dest;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_09516b39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f2e8);
    FUN_03f5c2a4(&DAT_0919f2f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180348);
    DAT_09516b39 = 1;
  }
  local_38 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_041ed1e4;
    uVar1 = FUN_06fd9fbc(*(long *)(param_1 + 0x10),param_2,&local_38,DAT_0919f2e8);
    if ((uVar1 & 1) != 0) {
      return local_38;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03f5c394(DAT_09180348,1);
    local_40 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    AnhPD_FoodOrder_OrderSpec___ctor(&local_80,param_2,param_2,0);
    if (lVar3 == 0) goto LAB_041ed1e4;
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_041ed1e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    memmove((void *)(lVar3 + 0x20),&local_80,0x48);
    thunk_FUN_03f5d7b8(lVar3 + 0x20,0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x48);
    if ((plVar2 == (long *)0x0) ||
       (lVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1b0)),
       lVar3 == 0)) goto LAB_041ed1e4;
  }
  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
    uVar1 = 0;
    __dest = (void *)(lVar3 + 0x20);
    uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if ((uVar4 <= uVar1) ||
         (AnhPD_FoodOrder_OrderSpec__WithRecipe(&local_80,__dest,param_2,0),
         *(uint *)(lVar3 + 0x18) <= uVar1)) goto LAB_041ed1e0;
      memmove(__dest,&local_80,0x48);
      thunk_FUN_03f5d7b8(__dest,0);
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar1 = uVar1 + 1;
      __dest = (void *)((long)__dest + 0x48);
    } while ((long)uVar1 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_041ed1e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8440(*(long *)(param_1 + 0x10),param_2,lVar3,DAT_0919f2f0);
  }
  return lVar3;
}

