// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$.ctor
// address: 0x7425194
// body: available
// range: 0x7425194-0x742547f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742525c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742538c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7425390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742547c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_SymmetricTransform___ctor
               (long param_1,long param_2,byte param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09520fa9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520fa9 = 1;
  }
  System_Object___ctor(param_1,0);
  plVar8 = (long *)(param_1 + 0x10);
  *plVar8 = param_2;
  thunk_FUN_03f5d7b8(plVar8,param_2);
  plVar3 = (long *)*plVar8;
  *(byte *)(param_1 + 0x18) = param_3 & 1;
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    *(int *)(param_1 + 0x1c) = iVar1 >> 3;
    if (param_4 == 0) {
      lVar5 = Mono_Security_Cryptography_KeyBuilder__IV(iVar1 >> 3,0);
      if (lVar5 == 0) goto LAB_07425390;
    }
    else {
      lVar4 = System_Array__Clone(param_4,0);
      uVar6 = DAT_0917fc88;
      if (lVar4 == 0) goto LAB_07425390;
      lVar5 = thunk_FUN_03f99350(lVar4,DAT_0917fc88);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar4,uVar6);
      }
    }
    if (*(int *)(lVar5 + 0x18) < *(int *)(param_1 + 0x1c)) {
      uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar6 = FUN_03f5c394(uVar6,2);
      FUN_039b1d98(lVar5);
      local_34 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_34);
      FUN_039b1d98(uVar6);
      FUN_039b0da0(uVar6,uVar7);
      FUN_039af17c(uVar6,0,uVar7);
      local_38 = *(undefined4 *)(param_1 + 0x1c);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_38);
      FUN_039b0da0(uVar6,uVar7);
      FUN_039af17c(uVar6,1,uVar7);
      uVar7 = thunk_FUN_03fc39d4(&DAT_092045d8);
      uVar6 = Locale__GetText(uVar7,uVar6,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar7 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091daac8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar6);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
      uVar6 = DAT_0917fc88;
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      uVar6 = FUN_03f5c394(uVar6,*(undefined4 *)(param_1 + 0x1c));
      puVar9 = (undefined8 *)(param_1 + 0x20);
      *puVar9 = uVar6;
      thunk_FUN_03f5d7b8(puVar9,uVar6);
      uVar6 = *puVar9;
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Math__Min(uVar2,*(undefined4 *)(lVar5 + 0x18),0);
      System_Buffer__BlockCopy(lVar5,0,uVar6,0,uVar2,0);
      uVar6 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x1c));
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar6);
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar6 = DAT_0917fc88;
        *(int *)(param_1 + 0x44) = iVar1 >> 3;
        uVar6 = FUN_03f5c394(uVar6,*(undefined4 *)(param_1 + 0x1c));
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        thunk_FUN_03f5d7b8();
        uVar6 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x1c));
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar6);
        return;
      }
    }
  }
LAB_07425390:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

