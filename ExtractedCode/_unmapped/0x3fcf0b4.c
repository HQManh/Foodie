// rea decompile_all
// name: FUN_03fcf0b4
// address: 0x3fcf0b4
// body: available
// range: 0x3fcf0b4-0x3fcf427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcf3c8 to 0x3fcb51c FUN_03fcb51c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcf0b4(void)

{
  clock_t cVar1;
  char *pcVar2;
  clock_t cVar3;
  clock_t cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (DAT_09535be0 == 0) {
    cVar1 = 0;
  }
  else {
    cVar1 = clock();
  }
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(3);
  }
  if (0 < DAT_097485b8) {
    DAT_097485d0 = DAT_097485d0 + DAT_097485b8;
  }
  DAT_097485b8 = 0;
  pcVar2 = getenv("GC_PRINT_ADDRESS_MAP");
  if (pcVar2 != (char *)0x0) {
    FUN_03fcfc84();
  }
  if (DAT_097485d8 != 0) {
    FUN_03fcfcbc(0);
  }
  if (DAT_09748510 != 0) {
    if (DAT_09515690 != 0) {
      uVar7 = 0;
      do {
        lVar8 = 8;
        do {
          if (*(long *)((&PTR_DAT_095156e0)[uVar7 * 4] + lVar8) != 0) {
            FUN_03fcfab8();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x408);
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_09515690);
    }
    FUN_03fcfd74(1);
  }
  FUN_03fcfe38();
  if (DAT_09535be0 == 0) {
    cVar3 = 0;
  }
  else {
    cVar3 = clock();
  }
  if (DAT_097485dc != 0) {
    FUN_03fcb048("Back height not available: Rebuild collector with -DMAKE_BACK_GRAPH\n");
  }
  if (DAT_09515690 != 0) {
    uVar7 = 0;
    do {
      lVar8 = 8;
      do {
        if (*(long *)((&PTR_DAT_095156e0)[uVar7 * 4] + lVar8) != 0) {
          FUN_03fcfb98();
        }
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x408);
      uVar7 = uVar7 + 1;
    } while (uVar7 < DAT_09515690);
  }
  if (DAT_09535be0 == 2) {
    FUN_03fcb51c("Bytes recovered before sweep - f.l. count = %ld\n",DAT_097485b8);
  }
  FUN_03fcfd74(0);
  if (DAT_09535be0 != 0) {
    uVar7 = DAT_09535c80 + DAT_09535c78;
    uVar6 = DAT_09535be8 - DAT_09535c88;
    if (uVar7 < uVar6) {
      if (uVar7 < 0x28f5c28f5c28f5c) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = (uVar7 * 100) / uVar6;
        }
      }
      else {
        uVar5 = 0;
        if (uVar6 / 100 != 0) {
          uVar5 = uVar7 / (uVar6 / 100);
        }
      }
    }
    else {
      uVar5 = 0;
    }
    FUN_03fcb51c("In-use heap: %d%% (%lu KiB pointers + %lu KiB other)\n",uVar5,
                 DAT_09535c78 + 0x1ffU >> 10,DAT_09535c80 + 0x1ffU >> 10);
  }
  lVar8 = DAT_09535be8;
  if (DAT_09748590 == 0) {
    uVar6 = (DAT_09535be8 - DAT_09535c08) - DAT_09748540;
    uVar7 = FUN_03fce858();
    DAT_09748538 = (uint)(uVar7 < uVar6);
  }
  else {
    DAT_09748540 = DAT_09535be8 - DAT_09535c08;
    DAT_09748538 = 0;
  }
  if (DAT_09535be0 == 2) {
    FUN_03fcb51c("Immediately reclaimed %ld bytes, heapsize: %lu bytes (%lu unmapped)\n",
                 DAT_097485b8,lVar8,DAT_09535c88);
  }
  lVar8 = DAT_09535c28;
  DAT_09748590 = 0;
  DAT_09748568 = DAT_09748520;
  DAT_09748558 = 0;
  DAT_09535c28 = 0;
  DAT_09535c30 = 0;
  DAT_09535c20 = DAT_09535c20 + lVar8;
  DAT_09535c40 = 0;
  DAT_09535c48 = 0;
  FUN_03fcd738();
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(4);
  }
  if (DAT_09535be0 == 0) {
    return;
  }
  cVar4 = clock();
  FUN_03fd0384();
  FUN_03fcb51c("Finalize plus initiate sweep took %lu + %lu msecs\n",(ulong)(cVar3 - cVar1) / 1000,
               (ulong)(cVar4 - cVar3) / 1000);
  return;
}

