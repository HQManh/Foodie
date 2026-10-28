// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator.<>c$$<Serialize>b__9_0
// address: 0x4429a94
// body: available
// range: 0x4429a94-0x4429f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4429efc to 0x7431268 System.String$$Join (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4429f00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CustomerOrderTranslator_<>c__<Serialize>b__9_0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09517f61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c7008);
    FUN_03f5c2a4(&DAT_091ca3f0);
    FUN_03f5c2a4(&DAT_09178818);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091fa098);
    FUN_03f5c2a4(&DAT_091f86d8);
    DAT_09517f61 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  if (param_2 != 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_Int32__ToString(param_2 + 0x10,uVar4,0);
    lVar2 = DAT_091b0570;
    if (lVar3 == 0) goto LAB_04429f00;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_04429f00;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_Int32__ToString(param_2 + 0x14,uVar4,0);
    lVar2 = DAT_091b0570;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_04429f00;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_Int32__ToString(param_2 + 0x18,uVar4,0);
    lVar2 = DAT_091b0570;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_04429f00;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = thunk_FUN_03f9944c(DAT_09178818);
    FUN_05324070(uVar4,0,DAT_091c7008,0);
    uVar4 = FUN_04af8044(uVar6,uVar4,DAT_091ca3f0);
    uVar4 = System_String__Join(DAT_091f86d8,uVar4,0);
    lVar2 = DAT_091b0570;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_04429f00;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (*(char *)(param_2 + 0x30) == '\0') {
      if (*(char *)(param_2 + 0x28) == '\0') goto LAB_04429ed4;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      param_2 = param_2 + 0x2c;
    }
    else {
      if (*(char *)(param_2 + 0x28) == '\0') {
        uVar4 = **(undefined8 **)(DAT_09535468 + 0xb8);
      }
      else {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = System_Int32__ToString(param_2 + 0x2c,uVar4,0);
      }
      lVar2 = DAT_091b0570;
      lVar5 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_04429f00;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      param_2 = param_2 + 0x34;
    }
    uVar4 = System_Int32__ToString(param_2,uVar4,0);
    lVar2 = DAT_091b0570;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
LAB_04429ed4:
      System_String__Join(DAT_091fa098,lVar3,0);
      return;
    }
  }
LAB_04429f00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

