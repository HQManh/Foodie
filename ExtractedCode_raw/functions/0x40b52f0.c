// rea decompile_all
// name: AnhPD.FoodOrder.RandomOrderLookup$$.ctor
// address: 0x40b52f0
// body: available
// range: 0x40b52f0-0x40b54a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b54a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RandomOrderLookup___ctor(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09515f0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f68);
    FUN_03f5c2a4(&DAT_091a3f70);
    FUN_03f5c2a4(&DAT_091a3f78);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091af650);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09515f0b = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar3;
  thunk_FUN_03f5d7b8(plVar9,lVar3);
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    FUN_057e185c(&local_48,param_2,DAT_091af650);
LAB_040b53f8:
    uVar4 = FUN_071bd28c(&local_48,DAT_091a3f70);
    lVar3 = local_38;
    if ((uVar4 & 1) != 0) {
      if ((local_38 != 0) &&
         (uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(local_38 + 0x10),0),
         lVar2 = DAT_091b0570, (uVar4 & 1) == 0)) {
        lVar5 = *plVar9;
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar8 = uVar6;
              thunk_FUN_03f5d7b8(puVar8);
            }
            else {
              FUN_057e0c68(lVar5,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_040b53f8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040b53f8;
    }
    FUN_071bd288(&local_48,DAT_091a3f68);
  }
  return;
}

