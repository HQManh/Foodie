// rea decompile_all
// name: System.Security.Cryptography.SHA384Managed$$_HashData
// address: 0x746b098
// body: available
// range: 0x746b098-0x746b25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746b23c to 0x75e4068 thunk_FUN_03f6c31c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA384Managed___HashData
               (long param_1,undefined8 param_2,int param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if ((DAT_095211c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a498);
    DAT_095211c3 = 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) = uVar1 + (long)param_4;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(int *)(lVar3 + 0x18) != 0) {
      lVar5 = lVar3 + 0x20;
    }
  }
  lVar3 = *(long *)(param_1 + 0x28);
  uVar7 = (uint)uVar1 & 0x7f;
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(int *)(lVar3 + 0x18) != 0) {
      lVar6 = lVar3 + 0x20;
    }
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(int *)(lVar4 + 0x18) != 0) {
      lVar8 = lVar4 + 0x20;
    }
  }
  if (((uVar1 & 0x7f) != 0) && (0x7f < (int)(uVar7 + param_4))) {
    iVar2 = 0x80 - uVar7;
    thunk_FUN_03f6c31c(param_2,param_3,lVar3,uVar7,iVar2,0);
    param_3 = iVar2 + param_3;
    param_4 = param_4 - iVar2;
    if (*(int *)(DAT_0918a498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Security_Cryptography_SHA384Managed__SHATransform(lVar8,lVar5,lVar6);
    uVar7 = 0;
  }
  if (0x7f < param_4) {
    do {
      thunk_FUN_03f6c31c(param_2,param_3,*(undefined8 *)(param_1 + 0x28),0,0x80,0);
      if (*(int *)(DAT_0918a498 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_4 = param_4 + -0x80;
      System_Security_Cryptography_SHA384Managed__SHATransform(lVar8,lVar5,lVar6);
      param_3 = param_3 + 0x80;
    } while (param_4 != (char)param_4);
  }
  if (param_4 < 1) {
    return;
  }
  thunk_FUN_03f6c31c(param_2,param_3,*(undefined8 *)(param_1 + 0x28),uVar7,param_4,0);
  return;
}

