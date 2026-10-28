// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounter$$AddHoldingSource
// address: 0x437b11c
// body: available
// range: 0x437b11c-0x437b2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437b2f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInGameNumberCounter__AddHoldingSource(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  
  if ((DAT_0951793e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09185e58);
    FUN_03f5c2a4(&DAT_091ad3f0);
    FUN_03f5c2a4(&DAT_091ad3f8);
    FUN_03f5c2a4(&DAT_091dcbd0);
    DAT_0951793e = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_1[0xd] != 0) {
    uVar3 = FUN_057e1004(param_1[0xd],param_2,DAT_091ad3f8);
    lVar9 = DAT_091ad3f0;
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = param_1[0xd];
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = (long)param_2;
          thunk_FUN_03f5d7b8(plVar8,param_2);
        }
        else {
          FUN_057e0c68(lVar4,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar5,param_1,DAT_091dcbd0,0);
        lVar9 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185e58) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0437b290;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e58,2);
LAB_0437b290:
        (*(code *)*puVar6)(param_2,uVar5,puVar6[1]);
        if ((char)param_1[5] == '\0') {
          return;
        }
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x0437b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,uVar2,0,*(undefined8 *)(*param_1 + 400));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

