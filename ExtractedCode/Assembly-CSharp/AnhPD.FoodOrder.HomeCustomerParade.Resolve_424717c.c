// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$Resolve
// address: 0x424717c
// body: available
// range: 0x424717c-0x4247367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42472e8 to 0x57e28a4 FUN_057e28a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4247360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4247364 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade__Resolve(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_09516e7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516e7f = 1;
  }
  lVar2 = DAT_091c0310;
  if (param_1 == 0) {
    lVar6 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar6 = *(long *)(lVar2 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    return **(undefined8 **)(lVar2 + 0xb8);
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0478(lVar2,*(undefined4 *)(param_1 + 0x18),DAT_091b0568);
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar7 = 0;
    uVar4 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(param_1 + 0x20 + uVar7 * 8);
      uVar4 = System_String__IsNullOrWhiteSpace(lVar6,0);
      if ((uVar4 & 1) == 0) {
        if ((lVar6 == 0) || (uVar3 = System_String__Trim(lVar6,0), lVar6 = DAT_091b0570, lVar2 == 0)
           ) goto LAB_04247360;
        lVar5 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_04247360;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      uVar4 = (ulong)*(uint *)(param_1 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  if (lVar2 != 0) {
    uVar3 = FUN_057e28a4(lVar2,DAT_091b05f8);
    return uVar3;
  }
LAB_04247360:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

