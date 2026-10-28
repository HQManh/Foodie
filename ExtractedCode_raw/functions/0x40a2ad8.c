// rea decompile_all
// name: UniRx.Scheduler.<>c__DisplayClass11_0$$<Schedule>b__1
// address: 0x40a2ad8
// body: available
// range: 0x40a2ad8-0x40a2ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a2cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a2cc8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a2ccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040a2cc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Scheduler_<>c__DisplayClass11_0__<Schedule>b__1(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  char local_44 [4];
  
  if ((DAT_09515e0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09186558);
    FUN_03f5c2a4(&DAT_091ef8b0);
    FUN_03f5c2a4(&DAT_09194260);
    DAT_09515e0b = 1;
  }
  local_44[0] = '\0';
  lVar1 = thunk_FUN_03f9944c(DAT_09194260);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x28) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),param_1);
    *(undefined1 *)(lVar1 + 0x10) = 0;
    puVar7 = (undefined8 *)(lVar1 + 0x18);
    *puVar7 = 0;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    plVar8 = *(long **)(param_1 + 0x18);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,lVar1,DAT_091ef8b0,0);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09186558) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_040a2c14;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186558,1);
LAB_040a2c14:
      uVar2 = (*(code *)*puVar3)(plVar8,uVar2,puVar3[1]);
      *puVar7 = uVar2;
      thunk_FUN_03f5d7b8(puVar7,uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      local_44[0] = '\0';
      System_Threading_Monitor__Enter(uVar2,local_44,0);
      if (*(char *)(lVar1 + 0x20) == '\0') {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UniRx_CompositeDisposable__Add(*(long *)(param_1 + 0x28),*puVar7);
        *(undefined1 *)(lVar1 + 0x10) = 1;
      }
      if (local_44[0] != '\0') {
        System_Threading_Monitor__Exit(uVar2,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

