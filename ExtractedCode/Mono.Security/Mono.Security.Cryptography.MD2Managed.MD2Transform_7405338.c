// rea decompile_all
// name: Mono.Security.Cryptography.MD2Managed$$MD2Transform
// address: 0x7405338
// body: available
// range: 0x7405338-0x740559b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7405594 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7405598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_MD2Managed__MD2Transform
               (long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  
  uVar7 = param_5 & 0xffffffff;
  if ((DAT_09520eba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d08);
    DAT_09520eba = 1;
  }
  System_Buffer__BlockCopy(param_2,0,*(undefined8 *)(param_1 + 0x48),0,0x10,0);
  System_Buffer__BlockCopy(param_4,uVar7,*(undefined8 *)(param_1 + 0x48),0x10,0x10,0);
  if (param_2 != 0) {
    lVar5 = param_5 << 0x20;
    uVar3 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar3) goto LAB_07405594;
      if (param_4 == 0) goto LAB_07405598;
      if ((ulong)*(uint *)(param_4 + 0x18) <= uVar7 + uVar3) goto LAB_07405594;
      lVar6 = *(long *)(param_1 + 0x48);
      if (lVar6 == 0) goto LAB_07405598;
      if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar3 + 0x20) goto LAB_07405594;
      lVar4 = lVar5 >> 0x20;
      lVar1 = param_2 + uVar3;
      lVar6 = lVar6 + uVar3;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x100000000;
      *(byte *)(lVar6 + 0x40) = *(byte *)(param_4 + lVar4 + 0x20) ^ *(byte *)(lVar1 + 0x20);
    } while (uVar3 != 0x10);
    uVar3 = 0;
    lVar5 = 0;
    do {
      uVar10 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x48);
        if (lVar6 == 0) goto LAB_07405598;
        if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_07405594;
        lVar6 = lVar6 + uVar10;
        bVar9 = *(byte *)(lVar6 + 0x20);
        if (*(int *)(DAT_09187d08 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = **(long **)(DAT_09187d08 + 0xb8);
        if (lVar4 == 0) goto LAB_07405598;
        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_07405594;
        uVar10 = uVar10 + 1;
        bVar9 = *(byte *)(lVar4 + uVar3 + 0x20) ^ bVar9;
        uVar3 = (ulong)bVar9;
        *(byte *)(lVar6 + 0x20) = bVar9;
      } while (uVar10 != 0x30);
      iVar8 = (int)lVar5;
      lVar5 = lVar5 + 1;
      uVar3 = (ulong)(iVar8 + (uint)bVar9) & 0xff;
    } while (lVar5 != 0x12);
    System_Buffer__BlockCopy(*(undefined8 *)(param_1 + 0x48),0,param_2,0,0x10,0);
    if (param_3 != 0) {
      if ((*(uint *)(param_3 + 0x18) & 0xfffffff0) != 0) {
        bVar9 = *(byte *)(param_3 + 0x2f);
        lVar5 = param_5 << 0x20;
        uVar3 = 0;
        while (uVar3 < *(uint *)(param_3 + 0x18)) {
          bVar2 = *(byte *)(param_3 + 0x20 + uVar3);
          if (*(int *)(DAT_09187d08 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((ulong)*(uint *)(param_4 + 0x18) <= uVar7 + uVar3) break;
          lVar6 = **(long **)(DAT_09187d08 + 0xb8);
          if (lVar6 == 0) goto LAB_07405598;
          bVar9 = *(byte *)(param_4 + (lVar5 >> 0x20) + 0x20) ^ bVar9;
          if (*(uint *)(lVar6 + 0x18) <= (uint)bVar9) break;
          lVar5 = lVar5 + 0x100000000;
          bVar9 = *(byte *)(lVar6 + (ulong)bVar9 + 0x20) ^ bVar2;
          *(byte *)(param_3 + 0x20 + uVar3) = bVar9;
          uVar3 = uVar3 + 1;
          if (uVar3 == 0x10) {
            return;
          }
        }
      }
LAB_07405594:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07405598:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

