// rea decompile_all
// name: UniRx.CompositeDisposable$$Add
// address: 0x4093340
// body: available
// range: 0x4093340-0x409353f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4093530 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093538 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409353c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04093470) */
/* WARNING: Removing unreachable block (ram,0x04093534) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_CompositeDisposable__Add(long param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  char local_34 [4];
  
  if ((DAT_09515d2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091ad1b0);
    DAT_09515d2b = 1;
  }
  local_34[0] = '\0';
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921dc48);
    System_ArgumentNullException___ctor(uVar3,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c5a78);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar3,local_34,0);
  lVar9 = DAT_091ad1b0;
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != '\0') {
LAB_04093438:
    if (local_34[0] != '\0') {
      System_Threading_Monitor__Exit(uVar3,0);
    }
    if (cVar1 != '\0') {
      lVar9 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040934cc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a58,0);
LAB_040934cc:
      (*(code *)*puVar5)(param_2,puVar5[1]);
    }
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *plVar8 = (long)param_2;
        thunk_FUN_03f5d7b8(plVar8,param_2);
      }
      else {
        FUN_057e0c68(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      goto LAB_04093438;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

