// rea decompile_all
// name: CakeOrder.Model.OrderRequirementTags$$.ctor
// address: 0x42669fc
// body: available
// range: 0x42669fc-0x4266c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4266c0c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4266c10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4266c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Model_OrderRequirementTags___ctor(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((DAT_09516fb4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c0558);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516fb4 = 1;
  }
  System_Object___ctor(param_1,0);
  lVar3 = DAT_091c0310;
  if (param_2 == 0) {
    lVar5 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar5 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
  }
  else {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  if ((param_3 != 0) && (0 < (int)*(ulong *)(param_3 + 0x18))) {
    uVar9 = 0;
    uVar6 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar8 = *(undefined8 *)(param_3 + 0x20 + uVar9 * 8);
      iVar2 = FUN_04ee582c(*(undefined8 *)(param_1 + 0x10),uVar8,DAT_091c0558);
      lVar5 = DAT_091b0570;
      if (iVar2 < 0) {
        if (lVar3 == 0) goto LAB_04266c14;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_04266c14;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar8;
          thunk_FUN_03f5d7b8(puVar4,uVar8);
        }
        else {
          FUN_057e0c68(lVar3,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      uVar6 = (ulong)*(uint *)(param_3 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(param_3 + 0x18));
  }
  if (lVar3 != 0) {
    uVar8 = FUN_057e28a4(lVar3,DAT_091b05f8);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
    return;
  }
LAB_04266c14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

