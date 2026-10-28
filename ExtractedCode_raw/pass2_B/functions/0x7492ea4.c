// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$GetServerContextSinkChain
// address: 0x7492ea4
// body: available
// range: 0x7492ea4-0x7493087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7493084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Contexts_Context__GetServerContextSinkChain(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  if ((DAT_09521318 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_091858b8);
    FUN_03f5c2a4(&DAT_091ad128);
    FUN_03f5c2a4(&DAT_091ad130);
    FUN_03f5c2a4(&DAT_0918a9c8);
    DAT_09521318 = 1;
  }
  plVar8 = (long *)(param_1 + 0x28);
  if (*plVar8 == 0) {
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*(long *)(DAT_09182b00 + 0xb8) + 8) == 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_0918a9c8);
      System_Object___ctor(uVar2,0);
      if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = (undefined8 *)(*(long *)(DAT_09182b00 + 0xb8) + 8);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(DAT_09182b00 + 0xb8) + 8);
    thunk_FUN_03f5d7b8(plVar8);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (iVar9 = *(int *)(*(long *)(param_1 + 0x38) + 0x18) + -1, -1 < iVar9)) {
      do {
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar9,DAT_091ad130);
        plVar4 = (long *)thunk_FUN_03f99350(uVar2,DAT_091858b8);
        if (plVar4 != (long *)0x0) {
          lVar5 = *plVar4;
          lVar10 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091858b8) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07493054;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091858b8,0);
LAB_07493054:
          lVar5 = (*(code *)*puVar3)(plVar4,lVar10,puVar3[1]);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        bVar1 = 0 < iVar9;
        iVar9 = iVar9 + -1;
      } while (bVar1);
    }
  }
  return *plVar8;
}

